#include "Header.h"
int main()
{
	setlocale(0, "ru");

	//создание массива////////////////////
	int rows;
	cout << "Введите n(количество строк(столбцов)): ";
	while (true)
	{
		rows = getnum();
		if (rows<=0)
			cout << "Количество строк (столбцов) должно быть больше 0. Повторите ввод." << endl;
		else
			break;
	}

	double** arr = new double* [rows];
	for (int i = 0; i < rows; i++)
		arr[i] = new double[rows];


	//заполнение массива//////////////////
	arr = fillmass(arr, rows);
	//вывод изначальной////////////////////////////////////
	cout << "Было: " << endl;
	showmassive(arr, rows);

	//изменение по варианту///////////////
	arr = changemass(arr, rows);

	//вывод изменённой////////////////////////////////////
	cout << "Стало: " << endl;
	showmassive(arr, rows);

	//чистка памяти///////////////////////
	for (int i = 0; i < rows; i++)
		delete [] arr[i];
	delete[] arr;
	system("pause");
	return 0;
}