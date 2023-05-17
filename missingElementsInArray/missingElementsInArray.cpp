#include <iostream>

using namespace std;

void bubbleSort(int *list,int length) {
	int index, i, temp;
	for (i = 1; i < length; i++) {
		for (index = 0; index < length - i; index++) {
			if (list[index] > list[index + 1])
			{
				temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;
			}
			
		}
	}
}

int main() {
	int length;
	cin >> length;
	int* arr = new int[length];
	for (int i = 0; i < length; i++) {
		cin >> *(arr + i);
	}
	bubbleSort(arr, length);
	int i = 0,j=0;
	while (i < length) {
		while (j != arr[i]) {
			cout << j << " ";
			j++;
		}
		if (arr[i] != arr[i + 1]) {
			j++;
		}
		i++;
	}
}