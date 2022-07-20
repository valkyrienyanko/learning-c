#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"

int main()
{
    int running = 1;
    help();

    while (running)
    {
        char cmd[30];

        scanf("%s", &cmd);

        if (strcmp(cmd, "help") == 0)
            help();
        else if (strcmp(cmd, "add") == 0)
        {
            printf("Enter a number for A:\n");
            int a;

            scanf("%d", &a);

            printf("Enter a number for B:\n");
            int b;

            scanf("%d", &b);

            printf("The result is '%d'\n", add(a, b));
            printf("\n\n\n");
        }
        else if (strcmp(cmd, "exit") == 0)
            running = 0;
        else
            printf("The command '%s' was not recognized, please type 'help' for a list of all the commands you can type\n", cmd);
    }

    return 0;
}

void help()
{
    printf("HELP\n");
    printf(" add\n");
    printf(" exit\n");
    printf("\n\n\n");
}
