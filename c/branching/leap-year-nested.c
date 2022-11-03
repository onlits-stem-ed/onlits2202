#include <stdio.h>
int main()
{
	int y;
	printf("Enter any year: ");
	scanf("%d", &y);
	if(y % 400 == 0)
	{
		printf("%d is a leap year.\n", y);
	}
	else
	{
		if(y%4==0)
		{
			if(y % 100 != 0)
			{
				printf("%d is a leap year.\n", y);
			}
			else
			{
				printf("%d is a common year.\n", y);
			}
		}
		else
		{
			printf("%d is a common year.\n", y);
		}
	}
	return 0;
}
