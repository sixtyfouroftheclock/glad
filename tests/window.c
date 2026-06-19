#include <glext/gl.h>
#include <GLFW/glfw3.h>

void
refresh_callback (GLFWwindow* window) {
  glClearColor (1.0f, 1.0f, 1.0f, 1.0f);
  glClear (GL_COLOR_BUFFER_BIT);
  glfwSwapBuffers (window);
}

int
main () {
  if (!glfwInit ()) {
    return 1;
  }

  glfwWindowHint (GLFW_CONTEXT_VERSION_MAJOR, 4);
  glfwWindowHint (GLFW_CONTEXT_VERSION_MINOR, 6);
  glfwWindowHint (GLFW_DECORATED, GLFW_TRUE);
  glfwWindowHint (GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  GLFWwindow* window = glfwCreateWindow (800, 600, "GL Window", NULL, NULL);
  glfwMakeContextCurrent (window);

  if (!window) {
    return 1;
  }

  glfwSetWindowSizeLimits (window, 600, 400, GLFW_DONT_CARE, GLFW_DONT_CARE);

  if (!glext_LoaderLoadGL ()) {
    return 1;
  }
  glfwSetWindowRefreshCallback (window, refresh_callback);

  while (!glfwWindowShouldClose (window)) {

    glfwWaitEvents ();
  }

  glext_LoaderUnloadGL ();
  if (window) {
    glfwDestroyWindow (window);
  }
  glfwTerminate ();
}
