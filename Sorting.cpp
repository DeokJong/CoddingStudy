#include "Sorting.h"
#include <malloc.h>
#include <iostream>

template <class T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
int calArrSize(int arr[]) {
	int i = _msize(arr);
	return i / sizeof(int);
}

void bubbleSort(int arr[]) {
	int arrSize = calArrSize(arr);
	int arrIndex = arrSize - 1;
	for (int i = 0; i <= arrIndex; i++) {
		for (int j = i + 1; j <= arrIndex; j++) {
			if (arr[i] > arr[j]) swap(arr[i], arr[j]);
		}
	}
}
void selectionSort(int arr[]) {
	int arrSize = calArrSize(arr);
	int arrIndex = arrSize - 1;
	int maxNumIndex = 0, maxNum = 0;;

	for (int i = arrIndex; 0<=i; i--) {
		for (int j = 0; j <= i; j++) {
			if (arr[j] > maxNum) {
				maxNum = arr[j];
				maxNumIndex = j;
			}
		}
		swap(arr[i], arr[maxNumIndex]);
		maxNum = 0;
		maxNumIndex = 0;
	}
}

void hybridMergeSort(int arr[]) {
	int arrSize = calArrSize(arr);
	int maxIndex = arrSize - 1;
}