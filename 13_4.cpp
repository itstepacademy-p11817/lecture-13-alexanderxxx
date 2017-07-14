#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

int count(int i)
{
	int sovp = 0, i1 = 0, i2 = 0, i3 = 0, i4 = 0;
	i1 = i / 1000 % 10;
	i2 = i / 100 % 10;
	i3 = i / 10 % 10;
	i4 = i / 1 % 10;

	if (i1 == i2)
		sovp++;
	if (i1 == i3)
		sovp++;
	if (i1 == i4)
		sovp++;
	if (i2 == i3)
		sovp++;
	if (i2 == i4)
		sovp++;
	if (i3 == i4)
		sovp++;
	
	if (sovp == 1)
		return 1;
	else
		return 0;
}

int main()
{
	setlocale(0, "");
	int cou = 0;
	for (int i = 1000; i <= 9999; i++)
	{
		cou += count(i);
	}
	cout << cou << '\n';
	system("pause");
	return 0;
}