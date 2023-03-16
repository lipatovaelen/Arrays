//Sort.h
#pragma once
#include"stdafx.h"
#include"constants.h"
//template<typename T> //имя шаблонного типа одномерного массива
void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
