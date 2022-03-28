#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
    int p;
    p = fork();
    if (p > 0)
    {
        printf("it's a parent process: %d \n", p);
        // wait(&p); doesnt work :()
    }
    else
    {
        printf("Child process: %d\n", p);
    }
    return 0;

    // gcc com.c
    // ./a.out

    // int i;
    // int pid;
    // pid = fork();
    // return 0;
}