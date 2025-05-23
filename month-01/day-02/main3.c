/*
 *  چالش switch-case
برنامه‌ای بنویس که عددی از 1 تا 7 از کاربر بگیره و روز هفته رو چاپ کنه.

📥 ورودی: 3
📤 خروجی: Wednesday

اگر عدد خارج از محدوده بود، بنویس: "Invalid input"

*/


#include <stdio.h>


int main()
{
	int userInput = 1;
 
	printf("Please enter anumber between 1 to 7\n");
	scanf("%d", &userInput);

	switch(userInput)
	{
		case 1:
			printf("Sunday\n");
			break;
		case 2:
			printf("Monda\n");
			break;
		case 3:
			printf("Tuesday\n");
			break;
		case 4:
			printf("Wednesday\n");
			break;
		case 5:
			printf("Thursday\n");
			break;
		case 6:
			printf("Friday\n");
			break;
		case 7:
			printf("Saturday\n");
			break;
		default:
			printf("Invlaid Input");
	}


	return 0;
}



