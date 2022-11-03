#include <stdio.h>
int main()
{
	int l, b, a;
	printf("Enter length: ");
	scanf("%d", &l);
	printf("Enter breadth: ");
	scanf("%d", &b);
	a = l * b;
	printf("The area is %d sq. units.\n", a);
}
