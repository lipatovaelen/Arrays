//Arreus
#include<iostream>

#include <stdlib.h> // нужен для вызова функции rand()-генерация случайного числа
                    // и  srand() - установка новой начальной точни для генерации последующих чисел массива
#include <time.h> // нужен для вызова функции time() - для постоянного изменения начальных точек
using namespace std;
void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);
void Sum(int arr[], const int n);
void Avg(int arr[], const int n);
void minValueIn(int arr[], const int n);
void maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n);
void shiftRight(int arr[], const int n);
//#define MASSIV_ZADAETSA

#define MASSIV_D_ZADANIE



void main()

{
	setlocale(LC_ALL, "");

#ifdef MASSIV_ZADAETSA

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

#endif // MASSIV_ZADAETSA

#ifdef MASSIV_D_ZADANIE
	//ввод количества элементов массива с клавиатуры
	cout << "введите количество элементов в  массиве: "; cin >> n;
	
	const int n;

	int arr[n];  // объявлен массив

	FillRand(arr, n);
	Print(arr, n);
	Sum(arr, n);
	Avg(arr, n);
	minValueIn(arr, n);
	maxValueIn(arr, n);
	Sort(arr, n);
	cout << endl;
	

	// Формирование массива случайных чисел,
// установить генератор случайных чисел
	void FillRand(int arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand();
		}
	}

	//Print   вывод массива на экран 
	void Print(int arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << endl;
		}
		cout << endl;
	}

	//Sum   вычисление суммы элементов массиво вывести ее на экран
	void Sum(int arr[], const int n)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		cout << "сумма элементов массива: " << sum;
		cout << endl;
	}

	//Avg  Возвр. среднее-арифметическое элементов массива
	void Avg(int arr[], const int n)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		int arithmeticmean = sum / n;
		cout << "среднее арифметическое элементов массива: " << arithmeticmean;
		cout << endl;
	}

	//minValueIn  Возвращает минимальное значение из массива
	void minValueIn(int arr[], const int n)
	{
		int min = arr[0];
		for (int i = 1; i < n; i++)
		{
			if (min > arr[i])
				min = arr[i];

		}
		cout << "Минимальное значение: " << min << endl;
	}
	//maxValueIn Возвращает максимальное значение из массива
	void maxValueIn(int arr[], const int n)
	{
		int max = arr[0];

		for (int i = 1; i < n; i++)
		{

			if (max < arr[i])
				max = arr[i];
		}

		cout << "Максммальное значение: " << max << endl;
	}

	//Sort  Сортирует массив

	void Sort(int arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] < arr[i])
				{
					int buffer = arr[i];
					arr[i] = arr[j];
					arr[j] = buffer;
				}
			}
		}
	}


#endif // MASSIV_D_ZADANIE


}