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
	//Integer - ����� �����
	//Integral - �������������
	// arr[2] = 

	//���� ��������� ������� � ����������:

	cout << "������� �������� �������: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//����� ������� �� ����� � ������ �������
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//����� ������� �� ����� � �������� �������
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//���������� ����� ��������� ������� ������� �� �� �����
	int summ = 0;

	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	cout << "����� ��������� �������: " << summ << endl;
	cout << "������� ��������������: " << (double)summ / n << endl;

	int max = arr[0]; //��������� (������) ������������ �������
	int min = arr[0];  //��������� ����������� �������
	//���� �� ������� ���������
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];	//���� ������� ������� ������ ��� ������� - �� ���������� ��������
		if (max < arr[i])
			max = arr[i];	//���� ������� ������� ������ ��� �������� - �� ���������� ���������
	}
	//����� �� �����
	cout << "������������ ����� ������� = " << max << endl;
	cout << "�����������  ����� ������� = " << min << endl;

}