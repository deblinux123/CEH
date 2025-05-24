/*
 * شرح پروژه:
برنامه‌ای بنویس که:

از کاربر یک عدد مثبت بگیره.

از عدد وارد شده تا عدد 0 شمارش معکوس کند.

اگر عددی که شمارش می‌شود:

زوج بود، چاپ کند: X is even

فرد بود، چاپ کند: X is odd

بعد از پایان شمارش، بنویسد: Countdown finished!
*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
	int num = 0;
	printf("Please enter a number: \n");

	scanf("%d", &num);

	for (int i = num; i >= 0; i--)
	{
		if (i % 2 == 0)
			printf("%d is even\n", i);
		else
			printf("%d is odd\n", i);
	}
	printf("Countdown finished!\n");


	return 0;
}


