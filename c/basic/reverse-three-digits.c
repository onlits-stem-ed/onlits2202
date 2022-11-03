#include <stdio.h>
int main()
{
	int n, d, r;
	printf("Enter a number: ");
	scanf("%d", &n);
	d = n % 10;
	n = n / 10;
	r = d * 100;
	d = n % 10;
	r = r + d * 10;
	d = n / 10;
	r = r + d;
	printf("The reverse is %d.\n", r);
	return 0;
}
