#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nmap2.h"


void nmapScan(void)
{
    char ipDomain[50];
    char command[200];

    printf("Enter Ip or Domain: \n");
    scanf("%s", ipDomain);

    sprintf(command, "sudo nmap -sV %s > scan_%s.txt", ipDomain, ipDomain);

    system(command);
    
    printf("Scan complited, Result saved in txt file.\n");
}