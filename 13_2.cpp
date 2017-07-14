#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int a = 5, b = 5;
	for (int f = 0; f <= 10; f++)
	{
		for (int i = 0; i <= 10; i++)
		{
			if (i >= a && i <= b)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		if (f < 5)
		{
			a--;
			b++;
		}
		else
		{
			a++;
			b--;
		}
		cout << '\n';
	}


	system("pause");
	return 0;
}


/*

if (f >= a && f <= b)
{
	cout << "*";
}
cout << " ";
if (f == 20)
{
	cout << '\n';
	a--;
	b++;
	f = 0;

}


*/