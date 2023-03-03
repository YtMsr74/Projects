#include <iostream>
using namespace std;

struct rec { int s; struct rec* p; };

int main()
{
	int i,n;
	n = 10;
	struct rec *p1, *p2, *p3;
	p1 = new struct rec;
	p2 = p1;
	for (i = 1;i < n + 1; i++)
	{
		p2->s = i;
		if (i < n)
		{
			p3 = new struct rec;
			p2->p = p3; p2 = p3;
		}
	}
	p2->p = NULL;
	p2 = p1;
	while (p2 != NULL)
	{
		cout << p2->s << " ";
		p2 = p2->p;
	}
	cout << endl;
}
