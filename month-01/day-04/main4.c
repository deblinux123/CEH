/*
 *  هدف:
برنامه‌ای بنویس که:

از کاربر یک دامنه یا IP بگیره.

با استفاده از ابزارهای لینوکسی (ping, whois, nmap) اطلاعات امنیتی زیر رو استخراج کنه:

آدرس IP

مالک دامنه (از whois)

وضعیت پاسخ‌گویی با ping

پورت‌های باز با nmap

نتایج رو در یک فایل report.txt ذخیره کنه.

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void appendFileContent(FILE *dest, const char *sourceFileName, const char *header)
{
	FILE *src = fopen(sourceFileName, "r");

	if (src == NULL)
	{
		fprintf(dest, "[+] Failed to open %s\n", sourceFileName);
	return;
	}

	fprintf(dest, "\n[+] %s: \n", header);

	char line[300];

	while(fgets(line, sizeof(line), src))
	{
		fputs(line, dest);
	}

	fclose(src);

}


int main()
{
	char domain[50];
	printf("Enter Domain or IP: \n");
	scanf("%s", domain);

	char cmd_ping[100];
	char cmd_whois[100];
	char cmd_nmap[100];

	sprintf(cmd_ping, "ping -c 2 %s > ping.txt", domain);
	sprintf(cmd_whois, "whois %s > whois.txt", domain);
	sprintf(cmd_nmap, "nmap -sT %s > nmap.txt", domain);


	system(cmd_ping);
	system(cmd_whois);
	system(cmd_nmap);


	FILE *fp = fopen("result.txt", "w");

	if (fp == NULL)
		printf("Failed to Open this File\n");
	
	appendFileContent(fp, "whois.txt", "WHOIS INFO");
	appendFileContent(fp, "ping.txt", "PING INFO");
	appendFileContent(fp, "nmap.txt", "NMAP INFO");
	return 0;
}
