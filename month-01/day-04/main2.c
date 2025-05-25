/*
 *
 *  برنامه‌ای برای شناسایی دامنه فعال
✅ هدف:
یک برنامه بنویس که:

دامنه‌ای از کاربر بگیره (مثل example.com)

از دستور ping برای بررسی در دسترس بودن اون دامنه استفاده کنه

اگر دامنه قابل پینگ بود (یعنی 0% loss)، چاپ کنه: Domain is alive!

در غیر این صورت چاپ کنه: Domain is not reachable.

📌 نکات:

از ping -c 2 استفاده کن تا فقط دو بار پینگ بزنه

از system() نخواهیم استفاده کنیم، چون باید خروجی ping رو بررسی کنیم

از تابع popen() برای گرفتن خروجی پینگ درون برنامه استفاده کن

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char domain[100];
	printf("Enter a domain to ping (google.com): \n");
	scanf("%s", domain);

	char command[200];
	sprintf(command, "ping -c 2 %s > ping_result.txt", domain);

	system(command);

	FILE *fp = fopen("ping_result.txt", "r");

	if (fp == NULL){
		printf("Failed to open ping output file\n");
		return 1;
	}

	char line[256];

	int isAlive = 0;

	while(fgets(line, sizeof(line), fp))
	{
		if (strstr(line, "0% packet loss"))

			{
				isAlive = 1;
				break;
			}
	}

	fclose(fp);

	if (isAlive)
		printf("Domain is alive!\n");
	else
		printf("Domain is not reachable.\n");


	return 0;
}






















