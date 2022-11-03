#include <stdio.h>
int main()
{
	int bs, da, hra, gs;				//Type declaration
	printf("Enter basic salary: ");
	scanf("%d", &bs);
	da = (bs * 40)/100;
	hra = (bs * 20)/100;
	gs = bs + da + hra;
	printf("Gross salary: %d\n", gs);
	return 0;
}
