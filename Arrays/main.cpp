//Arreus
#include<iostream>
using namespace std;
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
	cout << summ;
	cout << endl;

}
