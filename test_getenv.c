#include <stdlib.h>
#include <stdio.h>

char *getenv(const char *name);

char *secure_getenv(const char *name);

int main()
{
    char *env = "HOME";

    char *variable;

    variable = getenv(env);

    printf("The env is:\t %s  and it returns: \t %s \n \n", env, variable);

    return 0;
    }


