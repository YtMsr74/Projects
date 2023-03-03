#include <iostream>
using namespace std;

int main()
{
	int i, *a;
	a = new int[10];
	for (i = 0; i < 10; i++) a[i] = i * i;
	cout << "Array:";
	for (i = 0; i < 10; i++) cout << " " << a[i];
	cout << endl;
	delete[] a;
}