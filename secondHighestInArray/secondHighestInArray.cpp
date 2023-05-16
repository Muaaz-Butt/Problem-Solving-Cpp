#include <iostream>

using namespace std;

int main() {
	int size, temp = 0;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);
	}
	int i = 0, max = arr[0], secondMax = arr[0];
	while (i < size) {
		if (arr[i] > max) {
			max = *(arr + i);
			temp = i;
		}
		i++;
	}
	i = 0;
	int j;
	bool flag = true;
	while (i < size) {
		flag = true;
		for (j = 0; j < size && flag; j++) {
			if (j == temp) {
				j + 1;
			}
			else if (arr[i] < arr[j]) {
				flag = false;
			}

			else if (arr[i] < max && arr[i] >= arr[j]) {
				secondMax = arr[i];
			}
		}
		i++;
	}
	cout << secondMax;
}
