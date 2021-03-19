#include <iostream>
#include <string>

using namespace std;

void showmassive(int** arr, int rows)
{
	//вывод
	int cols = rows;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}
double getnum()
{
	double a;
	bool cor = 0;
	string as;
	cor = 0;
	while (!cor)
	{
		cin >> as;
		int i;
		for (i = 0; i < as.length(); i++)
		{
			if (int(as[i]) != 44 && int(as[i]) != 46 && (int(as[i]) < 48 || int(as[i]) > 57))//._,_0-9
				break;
		}
		if (i == as.length())
		{
			cor = 1;
			a = stod(as);
		}
		else
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Не верный ввод!!! Введите число : ";
		}
	}
	return a;
}
int main()
{
	setlocale(0, "ru");

	//создание массива////////////////////
	int rows;
	cout << "Введите n(количество строк(столбцов)): ";
	rows = getnum();
	int cols = rows;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
		arr[i] = new int[cols];

	//заполнение массива//////////////////
	cout << "Введите элементы массива: ";
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			arr[i][j] = getnum();

	//////////////////////////////////////
	cout << "Было: " << endl;
	showmassive(arr, rows);

	//изменение по варианту///////////////
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			if (i + j == rows - 1)
				arr[i][j] = 0;

	//////////////////////////////////////
	cout << "Стало: " << endl;
	showmassive(arr, rows);

	//чистка памяти///////////////////////
	for (int i = 0; i < rows; i++)
		delete [] arr[i];
	delete[] arr;
	system("pause");
	return 0;
}