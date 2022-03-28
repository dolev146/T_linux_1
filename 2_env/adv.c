#include <stdio.h>

extern char **environ;

int main(int argc, char *argv[])
{
    char **var;
    for (var = environ; *var != NULL; ++var)
    {
        printf("\n %s", *var);
    }
    return 0;
    // copy and past in terminal
    // gcc adv.c ; ./a.out dolev is gay
}