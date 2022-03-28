#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        for (int i = 0; i < argc; i++)
        {
            printf("ARG[%d]=%s", i, argv[i]);
        }
    }
    else
    {
        printf("Please specify more arguments");
    }
    return 0;

    // copy and past in terminal
    // gcc adv.c ; ./a.out dolev is gay
}