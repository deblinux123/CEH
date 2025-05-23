
/*
 * چالش ترکیبی
برنامه‌ای بنویس که:

از کاربر یک عدد مثبت بگیره.

اگر منفی بود، پیام خطا بده.

با for مجموع اعداد 1 تا آن عدد را محاسبه کند و نمایش دهد.

📥 ورودی: 5
📤 خروجی: Sum = 15 (1+2+3+4+5)

*/
#include <stdio.h>


int main()
{
	int userInput = 1;
	int sum = 0;
	printf("Please enter a number \n");
	scanf("%d", &userInput);

	if (userInput > 0)
	{
		for (int i = 1; i <= userInput; i++)
			sum+=i;

		printf("The result is : %d\n", sum);
	}
	else if (userInput <= 0)
		printf("Please enter a positive number\n");

	return 0;

}













