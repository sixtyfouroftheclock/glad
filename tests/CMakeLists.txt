add_executable(x11_test x11_test.c)
target_link_libraries(x11_test PRIVATE glo)
add_test(NAME x11 COMMAND x11_test)
