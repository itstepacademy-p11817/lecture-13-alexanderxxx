#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int a = 0, b = 0, c = 0, sl = 0, o = 0, oc = 0;
	cout << "Сложность:" << '\n' << "1 - easy" << '\n' << "2 - medium" << '\n' << "3 - hard" << '\n';
	cin >> sl;
	if (sl == 1)
	{
		for (int f = 0; f < 3; f++)
		{
			a = rand() % 9 + 1;
			b = rand() % 9 + 1;
			cout << "Сколько будет " << a << " * " << b << "?" << '\n';
			cin >> c;
			if (c == a*b)
			{
				cout << "Правильно" << '\n';
				o++;
			}
			else
			{
				cout << "Неправильно" << '\n';
			}
		}
		oc = 10 * o / 3;
	}
	else if (sl == 2)
	{
		for (int f = 0; f < 5; f++)
		{
			a = rand() % 99 + 1;
			b = rand() % 99 + 1;
			cout << "Сколько будет " << a << " * " << b << "?" << '\n';
			cin >> c;
			if (c == a*b)
			{
				cout << "Правильно" << '\n';
				o++;
			}
			else
			{
				cout << "Неправильно" << '\n';
			}
		}
		oc = 10 * o / 5;
	}
	else if (sl == 3)
	{
		for (int f = 0; f < 10; f++)
		{
			a = rand() % 999 + 1;
			b = rand() % 999 + 1;
			cout << "Сколько будет " << a << " * " << b << "?" << '\n';
			cin >> c;
			if (c == a*b)
			{
				cout << "Правильно" << '\n';
				o++;
			}
			else
			{
				cout << "Неправильно" << '\n';
			}
		}
		oc = 10 * o / 10;
	}
	cout << "Оценка: " << oc << '\n';
	system("pause");
	return 0;