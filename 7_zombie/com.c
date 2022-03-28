#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

// to print all the proccesses
// ps -e -o pid,stat,cmd
// and in a diffrent terminal you will see the zombie process



int main()
{
    int p;
    p = fork();
    if (p > 0)
    {
        printf("it's a parent process: %d \n", p);
        //wait();
        sleep(60);
    }
    else
    {
        printf("Child process: %d \n", p);
    }
    return 0;

    // gcc com.c
    // ./a.out

    // int i;
    // int pid;
    // pid = fork();
    // return 0;
}