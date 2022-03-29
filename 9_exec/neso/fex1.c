#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    // fork make the program to run twice by two proccess
    fork();
    fork();
    fork();
    // 8 process because of the triple fork() call
    
    printf("Hello Neso Academy!\n PID = %d\n", getpid());
    return 0;
}

// run in terminal
// gcc fex1.c
// ./a.out