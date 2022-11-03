#include <stdio.h>
int main()
{
	int l, b, ar, p;
	float r, ac, c;
	printf("Enter length of a rectangle: ");
	scanf("%d", &l);
	printf("Enter breadth of a rectangle: ");
	scanf("%d", &b);
	printf("Enter the radius of a circle: ");
	scanf("%f", &r);
	ar = l * b;
	p = 2 * (l + b);
	ac = 3.14 * r * r;
	c = 2 * 3.14 * r;
	printf("The area of rectangle is %d sq. units.\n", ar);
	printf("The perimeter of rectangle %d units.\n", p);
	printf("The area of circle is %1.2f sq. units\n", ac);
	printf("The circumference of circle is %1.2f units.\n", c);
	return 0;
}
