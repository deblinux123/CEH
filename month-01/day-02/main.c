/*
چالش if
برنامه‌ای بنویس که یک عدد از کاربر بگیره و بگه عدد مثبت، منفی یا صفره.

📥 ورودی نمونه: -5
📤 خروجی نمونه: عدد منفی است.
*/

#include <stdio.h>


int main()
{
	int number = 0;
	printf("Please enter a number: \n");
	scanf("%d", &number);

	if (number < 0)
		printf("Your number is negative\n");
	else if(number > 0)
		printf("Your number is posetive\n");
	else
		printf("Your number is 0\n");

	return 0;
}
