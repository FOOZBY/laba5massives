#include "Header.h"

double getnum()//проверка ввода
{
	double value;
	while (!(cin >> value))
	{ //Since value is a double, (cin >> value) will be true only if the user enters a valid value that can be put inside a double
		cout << "Please enter a valid value (use '.' instead ','):" << endl;
		cin.clear();
		cin.ignore(32767, '\n');
	}
	cin.ignore(32767, '\n');
	return value;
}

void show_array(double (&arr)[10][10], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(7) << *(*(arr + i) + j) << "\t";
		}
		cout << endl;
	}
}

void fill_array(double (&arr)[10][10], int n)
{
	cout << endl << "Введите элементы массива: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "[" << i << "][" << j << "] ";
			*(*(arr+i)+j) = getnum();
		}
	}
}

void change_array(double (&arr)[10][10], int n)
{
	for (int i = 0; i < n; i++)
		*(*(arr + i) + n - i - 1) = 0;
}