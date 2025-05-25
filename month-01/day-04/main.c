/*
 * برنامه‌ای بنویس که:

از کاربر IP بگیره

با system("ping") اون IP رو پینگ کنه

خروجی پینگ رو نمایش بده

📌 مثال ساده (در فایل ping_tool.c):
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ip[50];

	printf("Please Ip to ping\n");
	scanf("%s", ip);

	char command[150];

	sprintf(command, "ping -c 4 %s", ip);

	system(command);


	return 0;
}
