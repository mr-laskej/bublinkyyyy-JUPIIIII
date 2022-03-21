#include <stdio.h>

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");
}

void prohodit(int *a, int *b) {
	int temp = *a;
	*a = *b; 
	*b = temp;

}

void bubbleSort(int arr[], int size) {
	for (int j = 0; j < size - 1; j++) {
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			prohodit(&arr[i], &arr[i + 1]);
		}
		}
	}
}

int main()
{
	int pole[] = { 64, 32, 20, 10, 33, 69, 5 };
	int pocet = sizeof(pole) / sizeof(pole[0]);
	printArray(pole, pocet);
	bubbleSort(pole, pocet);
	printArray(pole, pocet);
}