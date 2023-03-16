//Avg.h
#pragma once
#include"stdafx.h"
#include"constants.h"
//template<typename T>//имя шаблонного типа одномерного массива
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
//template<typename T>//имя шаблонного типа двумерного массива
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);

