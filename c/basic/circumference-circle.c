#include <stdio.h>
#define PI 3.14			//defined a symbolic constant
int main()
{
	float r, c;
	printf("Enter radius: ");
	scanf("%f", &r);
	c = 2 * PI * r;
	printf("Circumference is %1.2f units.\n", c);
	return 0;
}
