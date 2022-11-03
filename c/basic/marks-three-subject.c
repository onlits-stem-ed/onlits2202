#include <stdio.h>
int main()
{
	int e, m, h;
	float tm, p;
	printf("Enter the marks of english: ");
	scanf("%d", &e);
	printf("Enter the marks of mathematics: ");
	scanf("%d", &m);
	printf("Enter the marks of hindi: ");
	scanf("%d", &h);
	tm = e + m + h;
	p = tm/300 * 100;
	printf("Total marks obtained is %1.0f.\n", tm);
	printf("Percentage of marks is %1.2f.\n", p);
}

/*
	Test case 1
		e = 45
		m = 49
		h = 40
		tm = 134
		p = 44.67
	Test case 2
		e = 83
		m = 92
		h = 81
		t = 256
		p = 85.33
*/
