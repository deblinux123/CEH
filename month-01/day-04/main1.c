/*
 *  برنامه‌ای بنویس که:
یک IP از کاربر بگیره

از دستور whois برای گرفتن اطلاعات اون IP استفاده کنه

خروجی رو در یک فایل به اسم whois_result.txt ذخیره کنه (نه روی صفحه)

📌 راهنمایی:

از sprintf برای ساخت دستور whois استفاده کن

از > در system() برای ریدایرکت خروجی استفاده کن
*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
	char ip[50];

	printf("Enter ip: \n");
	scanf("%s", ip);

	char command[150];
	sprintf(command, "whois %s > whois_result.txt", ip);

	system(command);
	return 0;
}
