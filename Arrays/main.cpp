//Arreus
#include<iostream>
using namespace std;

#define SUMMA_MASSIVA
#define SREDNEE_ARIFMRETICHESKOE
#define MINIMUM_MAXIMUM

void main()

{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = { 3, 5, 8 };
	//Integer - целое число
	//Integral - целочисленный
	// arr[2] = 

	//ввод элементов массива с клавиатуры:

	cout << "введите элементы массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//вывод массива на экран в прямом порядке
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//вывод массива на экран в обратном порядке
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//вычисление суммы элементов массиво вывести ее на экран
	int summ = 0;

	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	cout << "Сумма элементов массива: " << summ << endl;
	cout << "Среднее арифметическое: " << (double)summ / n << endl;

	int max = arr[0]; //начальный (первый) максимальный элемент
	int min = arr[0];  //начальный минимальный элемент
	//цикл на перебор элементов
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];	//если текущий элемент меньше чем минимум - то перезапись минимума
		if (max < arr[i])
			max = arr[i];	//если текущий элемент больше чем максимум - то перезапись максимума
	}
	//вывод на экран
	cout << "Максимальное число массива = " << max << endl;
	cout << "Минимальное  число массива = " << min << endl;

}