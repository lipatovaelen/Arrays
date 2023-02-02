//Arreus
#include<iostream>
using namespace std;
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
	cout << summ;
	cout << endl;

}
