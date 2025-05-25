/*
 * اسکن پورت ساده با nmap از داخل برنامه C
🎯 هدف:
نوشتن برنامه‌ای که:

یک IP یا دامنه از کاربر بگیره.

دستور nmap رو اجرا کنه برای اسکن پورت‌ها.

خروجی رو توی فایل ذخیره کنه.

خطوطی که شامل open هستن رو از فایل بخونه و نمایش بده.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char domain[50];
    printf("Enter IP or Domain: \n");
    scanf("%s", domain);

    char command[100];
    sprintf(command, "nmap -sT %s > nmap_result.txt", domain);
    system(command);

    FILE *fp = fopen("nmap_result.txt", "r");
    if (fp == NULL)
    {
        printf("Failed to open file.\n");
        return 1;
    }

    char line[300];
    int foundOpenPorts = 0;

    printf("🔍 Open Ports Found:\n");

    while (fgets(line, sizeof(line), fp))
    {
        if (strstr(line, "open"))
        {
            printf("%s", line);
            foundOpenPorts = 1;
        }
    }

    fclose(fp);

    if (!foundOpenPorts)
        printf("No open ports found.\n");

    return 0;
}




















