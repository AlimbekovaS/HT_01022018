#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include "Header.h"
using namespace std;

void main() {
	setlocale(LC_ALL, "ru");
	int z;
	cout << "����� �������?";
	cin >> z;
	switch (z)
	{
	case 1:
	{
		//1.�������� �������, ������� ���������, �������� �� ���������� �� ����� �������? ����� ���������� �������, ���� ��� ������� ��� ������� ������ �� ���� � �� �������.
		int c;
		cout << "������� �����: ";
		cin >> c;
		prostoe(&c);
		break;
	}
	case 2:
	{
		//2.�������� �������, ����������� �������� ��������� ������ ��������� ����� � ���������� �������.
		const int size = 10;
		int arr[size], key;
		rand(arr, size);
		cout << "������� ����: ";
		cin >> key;
		int index = 0;
		index = LineSearch(arr, size, key);
		if (index != -1)
			cout << "����� �������� ��� �������� " << index << endl;
		else
			cout << "������� ����� ��� � �������" << endl;
		break;
	}
	case 3: {

		int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
		int left, right, key, index;
		cout << "������� ����: ";
		cin >> key;
		index = Bsearch(arr, key, 0, 9);
		cout << "����� " << key << " ��������� ��� �������� " << index << endl;
		break;
	}
	case 4:
	{

	}

	}
	system("pause");
}
