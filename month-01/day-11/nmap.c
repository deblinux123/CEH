#include "nmap.h"
#include <stdio.h>
#include <stdlib.h>



void nmapScan()
{
    char ip[50];
    char command[100];

    printf("Enter Ip address: \n");
    scanf("%s", ip);

    sprintf(command, "sudo nmap -sS %s > result.txt", ip);
    system(command);

    printf("Scan complited. Result saved in result.txt file.\n");
}