#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

int count(int v)
{
	int count = 0;
	for (; v>0; count++)
	{
		v /= 10;
	}
	return count;
}


int summ(int v)
{
	int cou = count(v), x = 0, x1 = 0;
	for (int f = pow(10, cou) / 10; f>0; f /= 10)
	{
		x = (v / f % 10);
		x1 += x;
	}
	return x1;
}

int count_of_0(int v)
{
	int cou = count(v), x = 0, x1 = 0;
	for (int f = pow(10, cou) / 10; f>0; f /= 10)
	{
		x = (v / f % 10);
		if (x == 0)
			x1++;
	}
	return x1;
}


int main()
{
	setlocale(0, "");
	int v = 0;
	cout << "Число: ";
	cin >> v;
	cout << "Количество цифр: " << count(v) << '\n' << "Их сумма: " << summ(v) << '\n' << "Среднее арифметическое: " << summ(v) / count(v) << '\n' << "Количество нулей: " << count_of_0(v) << '\n';
	system("pause");
	return 0;
}