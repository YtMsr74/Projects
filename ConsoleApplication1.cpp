#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float x, st, step;
	printf("Enter the starting point ( (0;4] )\n");
	scanf_s("%f", &st);
	printf("x y\n");
	step = (4 - st) / 10;
	for (x = st;x <= 4;x += step) printf("%.2f %.4f\n", x, ((sin(x)) / x));
}