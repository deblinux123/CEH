/*
 * برنامه‌ای بنویس که:

از کاربر یک عدد بگیره.

اگر عدد منفی بود، پیام خطا بده.

اگر عدد بین 1 تا 10 بود، با حلقه for آن عدد را آن‌قدر چاپ کنه (مثلاً ورودی: 4 → خروجی: 4 4 4 4)
*/



#include <stdio.h>


int main()
{
	int num = 0;
	printf("Please enter a number between 1 - 10: \n");
	scanf("%d", &num);

	if (num > 0)
	{
		for (int i = 0; i < num; i++)
			printf("%d  ", num);
		printf("\n");
	}
	else
		printf("Invalid Number\n");

	return 0;
}
