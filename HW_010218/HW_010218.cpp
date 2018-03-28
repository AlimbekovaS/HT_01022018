#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include "Header.h"
using namespace std;

void main() {
	setlocale(LC_ALL, "ru");
	int z;
	cout << "Какое задание?";
	cin >> z;
	switch (z)
	{
	case 1:
	{
		//1.Написать функцию, которая проверяет, является ли переданное ей число простым? Число называется простым, если оно делится без остатка только на себя и на единицу.
		int c;
		cout << "Введите число: ";
		cin >> c;
		prostoe(&c);
		break;
	}
	case 2:
	{
		//2.Написать функцию, реализующую алгоритм линейного поиска заданного ключа в одномерном массиве.
		const int size = 10;
		int arr[size], key;
		rand(arr, size);
		cout << "Введите ключ: ";
		cin >> key;
		int index = 0;
		index = LineSearch(arr, size, key);
		if (index != -1)
			cout << "число находитс под индексом " << index << endl;
		else
			cout << "данного числа нет в массиве" << endl;
		break;
	}
	case 3: {

		int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
		int left, right, key, index;
		cout << "Введите ключ: ";
		cin >> key;
		index = Bsearch(arr, key, 0, 9);
		cout << "Число " << key << " находится под индексом " << index << endl;
		break;
	}
	case 4:
	{

	}

	}
	system("pause");
}
