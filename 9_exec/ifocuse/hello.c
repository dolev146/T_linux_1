#include <stdio.h>
#include <unistd.h>

// in the treminal
// man exec

int main(){
    printf("I am in hello.c \n");
    printf("PID of hello.c is %d\n", getpid());
    return 0;
}