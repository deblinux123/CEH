#include <stdio.h>
#include <stdlib.h>


int main()
{
    char command[100];
    char ip[20];

    for (int i = 1; i < 255; i++)
    {
        sprintf(ip, "192.168.1.%d", i);
        sprintf(command, "ping -c 1 -w 1 %s > /dev/null", ip);


        if (system(command) == 0)
        {
            printf("Active: %s\n", ip);
        }
    }

    return 0;
}