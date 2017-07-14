#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main()
{
	setlocale(0, "");
	int v = 0, v1=0, i=0;
	cin >> v;
	v1 = v;
	for (; v>0; i++) 
	{
		v /= 10;
	}

	for (int f= pow(10,i)/10;f>0;f/=10)
	{
		int x = (v1 / f % 10);
		if (x != 3 && x != 6)
		{
			cout << x;
		}
	}
	system("pause");
	return 0;
}