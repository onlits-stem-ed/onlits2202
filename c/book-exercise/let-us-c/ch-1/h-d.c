#include <stdio.h>
int main()
{
	float f, c;
	printf("Enter temperature in f: ");
	scanf("%f", &f);
	c = 5.0f/9.0f * (f-32);
	printf("The temperature in centigrade %1.1f.\n",c);
	return 0;
}
