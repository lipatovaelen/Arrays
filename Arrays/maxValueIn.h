//maxValueIn.h
#pragma once
#include"stdafx.h"
#include"constants.h"
#include"template.h"
template<typename T>//��� ���������� ���� ����������� �������
int maxValueIn(T arr[], const int n);
double maxValueIn(double arr[], const int n);
template<typename T>//��� ���������� ���� ���������� �������
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
