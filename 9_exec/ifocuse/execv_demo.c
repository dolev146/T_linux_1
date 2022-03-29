#include <stdio.h>
#include <unistd.h>
// in the treminal
// man exec
// gcc -o hello hello.c
// gcc -o execv_demo execv_demo.c
// ./execv_demo

int main()
{
    printf("I am in exec_Demo.c\n");
    printf("PID of exec_demo.c is %d\n", getpid());
    char *args[] = {"./hello", NULL};
    execv(args[0], args);
    printf("coming back to execv_demo.c"); // This will not be executed
    return 0;
}
