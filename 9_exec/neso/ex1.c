#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// run in treminal
// gcc ex1.c -o ex1
// gcc ex2.c -o ex2
// ./ex1

int main(int argc, char *argv[])
{
    printf("PID of ex1.c = %d\n", getpid());
    char *args[] = {"Hello", "Neso", "Academy", NULL};
    execv("./ex2", args);
    printf("Back to ex1.c "); // this is not printed because we didnt specify for going back here . i think we need to wait() to make it run
    return 0;
}
