int add(int a, int b)
{
    return a + b;
}

// gcc -fPIC -c add.c
// gcc -fPIC -c sub.c
// fPIC position indipentant
// gcc -shared -o libbasic.so add.o sub.o
// so = shared object
// gcc -c demo.c
// gcc -o demo demo.o libbasic.so
// how to install a library
// sudo mv libbasic.so /usr/lib
// sudo ldconfig
// ./demo
