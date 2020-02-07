#pragma once

#include<iostream>
#include <string>
#include <stdio.h>


void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void quickSort(std::string& str, int left, int right) {
	int i = left, j = right;
	int mid = str[(left + right) / 2];

	/* partition */
	while (i <= j) {
		while (str[i] < mid)
			i++;
		while (str[j] > mid)
			j--;
		if (i <= j) {
			std::swap(str[i], str[j]);
			i++; j--;
		}
	};

	/* recursion */
	if (left <= j)
		quickSort(str, left, j);
	if (i < right)
		quickSort(str, i, right);
}



int Partition(int arr[], int l, int r)
{
	int pivot = arr[r];
	int i = l - 1;
	for (int j = l; j <= r - 1; ++j)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);

		}
	}
	swap(&arr[i + 1], &arr[r]);
	return (i + 1);
}

void quickSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int pi = Partition(arr, l, r);

		quickSort(arr, l, pi - 1);
		quickSort(arr, pi + 1, r);
	}
}


void print(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << " ";
	}
}