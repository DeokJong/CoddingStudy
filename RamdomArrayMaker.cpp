#include "RamdomArrayMaker.h"
#include <random>
#include <iostream>

int* makeArr() {
	std::random_device rd;
	std::mt19937_64 gen(rd());

	std::uniform_int_distribution<int> dis(1, 10);

	int randomSize=dis(gen);
	int* arr = new int[randomSize];
	int arrIndex = randomSize - 1;

	for (int i = 0; i <= arrIndex; i++) arr[i]=gen()%300+1;
	
	return arr;
}

void displayArr(int arr[]) {
	int arrIndex = _msize(arr) / sizeof(int) - 1;
	for (int i = 0; i <= arrIndex; i++) {
		printf("%d ", arr[i]);
	}
	std::cout << "\n";
}

bool isSort(int arr[]) {
	int arrSize = _msize(arr) / sizeof(int);
	int arrIndex = arrSize - 1;
	for (int i = 0; i < arrIndex; i++) {
		if (arr[i] > arr[i + 1]) return 0;
	}
	return 1;
}

void checkSort(int arr[]) {
	if (isSort(arr)) std::cout << "Array is sorted\n";
	else std::cout << "Array is not sorted\n";
}