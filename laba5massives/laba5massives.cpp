#include "Header.h"

int main()
{
	setlocale(0, "ru");

	const int N = 10;

	//создание массива////////////////////
	double arr[N][N];

	//ввод размерности массива////////////////////
	int n;
	cout << "Введите n (количество строк(столбцов)): ";
	while (true)
	{
		n = getnum();
		if (n <= 0)
			cout << "Количество строк (столбцов) должно быть больше 0. Повторите ввод." << endl;
		else
			break;
	}

	//заполнение массива//////////////////
	fill_array(arr, n);

	//вывод изначальной////////////////////////////////////
	cout << endl << "Было:" << endl;
	show_array(arr, n);

	//изменение по варианту///////////////
	change_array(arr, n);

	//вывод изменённой////////////////////////////////////
	cout << endl << "Стало:" << endl;
	show_array(arr, n);

	cout << endl;
	system("pause");
	return 0;
}