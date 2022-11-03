#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the first integer: ");
	scanf("%d",&a);
	printf("Enter the second integer: ");
	scanf("%d", &b);
	c = a + b;
	printf("%d is the sum of above integers.\n", c);
	return 0;
}
