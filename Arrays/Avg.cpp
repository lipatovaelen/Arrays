#include"Avg.h"
#include"Sum.h"

//template<typename T>//имя шаблонного типа одномерного массива
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}
//template<typename T>//имя шаблонного типа двумерного массива
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}