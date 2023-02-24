#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int d1, d2, d3, s, n, max;
	printf("Enter the limit for sum of fibonacci numbers\n");
	scanf_s("%d", &max);
	s = 0;
	d1 = 0;
	d2 = 1;
	for (n = 1; s + d2 <= max; n++)
	{
		s += d2;
		d3 = d1 + d2;
		d1 = d2;
		d2 = d3;
	}
	printf("Amount of fibonacci numbers: %d\n", n);
	printf("Sum of fibonacci numbers: %d\n", s);
}
