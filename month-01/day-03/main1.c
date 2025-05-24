/*
 * برنامه‌ای بنویس که:

از کاربر یک عدد مثبت بگیره.

بررسی کنه آیا عدد زوج هست یا فرد:

اگر زوج بود، تمام اعداد زوج از 0 تا آن عدد را چاپ کند.

اگر فرد بود، تمام اعداد فرد از 1 تا آن عدد را چاپ کند.

*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num = 0;
	printf("Please enter a number: \n");
	scanf("%d", &num);


	if (num % 2 == 0)
	{
		for (int i = 0; i<= num; i+=2)
			printf("%d ", i);
		printf("\n");
	}
	else if (num % 2 != 0)
	{
		for (int j = 1; j <= num; j+=2)
			printf("%d ", j);
		printf("\n");
	}
	else
		printf("Invalid Number");

	return 0;
}



















