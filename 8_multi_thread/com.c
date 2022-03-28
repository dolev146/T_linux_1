#include <stdio.h>
#include <pthread.h>



void *show(void *u)
{
    printf("New Thread\n");
}

int main()
{
    pthread_t tid;
    // adress , atributes ,
    // point to out function , pointer to aruments i want to pass to function
    pthread_create(&tid, NULL, &show, NULL);
    printf("Main thread \n");
    // line below will make main thread will wait to the completion of the new thread
    pthread_join(tid, NULL);
    // gcc com.c -lpthread
    // ./a.out
    return 0;
}