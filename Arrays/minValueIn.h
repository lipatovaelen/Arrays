//minValueIn.h
#pragma once
#include"stdafx.h"
#include"constants.h"
#include"template.h"
//template<typename T>//имя шаблонного типа одномерного массива
int minValueIn(T arr[], const int n);
double minValueIn(double arr[], const int n);
template<typename T>//имя шаблонного типа двумерного массива
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
