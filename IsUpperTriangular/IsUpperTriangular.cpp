#include <iostream>

using namespace std;

void get2DArray(int* ptr, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> *(ptr + i * row + j);
		}
	}
}

void displayArray(int* ptr, int  row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << *(ptr + i * row + j)<<"  ";
		}
		cout << endl;
	}
}

bool isUpperTriangular(int* arr, int row, int col) {
	for (int i = 1; i < row; i++) {
		for (int j = 0; j <i ; j++) {
			if (*(arr+i*col+j) != 0) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	int row, col;
	cin >> row >> col;
	if (row != col) {
		cout << "This function is valid only for square matrix";
		return false;
	}
	int* arr = new int[row * col];
	get2DArray(arr, row, col);
	displayArray(arr, row, col);
	cout << "\n"<<isUpperTriangular(arr, row, col);
}