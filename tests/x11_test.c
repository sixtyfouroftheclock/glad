#include <glo/glx.h>
#include <glo/gl.h>
#include <glo/gl.h>
#include <X11/Xlib.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    Display *display = XOpenDisplay(NULL);
    printf("Opened display\n");

    int screen = DefaultScreen(display);
    printf("Default screen set\n");
    
    gloLoaderLoadGLX(display, screen);
    printf("glx loaded\n");
    
    XCloseDisplay(display);
    printf("Closed display\n");
    
    gloLoaderUnloadGLX();
    printf("glx unloaded\n");
}
