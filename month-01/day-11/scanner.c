#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.h"

char filename[100];
char ip[50];

void nmapScan(void) {
    printf("Enter IP or Domain: ");
    scanf("%s", ip);

    sprintf(filename, "scan_%s.txt", ip);
    char command[200];
    sprintf(command, "nmap -sV %s > %s", ip, filename);
    system(command);

    printf("Scan completed. Result saved in %s\n", filename);
}

void analyzResult(void) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Failed to open scan result file.\n");
        return;
    }

    char line[300];
    int found = 0;

    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, "open") != NULL) {
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (found)
        printf("✅ Open port found in %s\n", filename);
    else
        printf("❌ No open ports detected in %s\n", filename);
}
