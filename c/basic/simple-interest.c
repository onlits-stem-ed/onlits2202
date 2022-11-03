#include <stdio.h>
int main()
{
	float p, r, t, si;
	printf("Enter principal (in rs.): ");
	scanf("%f", &p);
	printf("Enter rate (%% p.a.): ");
	scanf("%f", &r);
	printf("Enter time (in years): ");
	scanf("%f", &t);
	si = (p*r*t)/100;
	printf("Simple Interest is rupees %1.2f.\n", si);
	return 0;
}
