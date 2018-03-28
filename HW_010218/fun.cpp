#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include "Header.h"
using namespace std;
void prostoe(int *a)
{
	bool isPrime;
	for (int i = 2; i < *a - 1; i++)
	{
		if (*a%i == 0) {
			isPrime = false;
			break;
		}
		else if (*a%*a == 0 && *a % 1 == 0)
		{
			isPrime = true;
		}
	}
	if (isPrime)
		cout << "число простое!" << endl;
	else
		cout << "Число не простое" << endl;
}
void rand(int *arr, int size)
{
	for (int i = 1; i <= size; i++)
	{
		arr[i] = rand() % 100 + 1;
		cout << arr[i] << " ";
		if (i >= 10)
			cout << endl;
	}
}
int LineSearch(int *arr, int size, int key)
{
	for (int i = 1; i <= size; i++) {
		if (arr[i] == key)
			return i;
	}
	return -1;
}
int Bsearch(int arr[], int key, int left, int right)
{
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (key < arr[mid])
			right = mid - 1;
		else if (key > arr[mid])
			left = mid + 1;
		else
			return mid;
	}

}

