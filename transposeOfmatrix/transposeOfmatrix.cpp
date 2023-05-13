#include<iostream>

using namespace std;

void displayMatrix(int* arr, int rows, int col) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			cout << *(arr + i * rows + j)<<" ";
		}
		cout << endl;
	}
}

int main() {
	int rows, col;
	cin >> rows >> col;
	if (rows != col) {
		cout << "Enter again\n Rows and columns must be equal: ";
		cin >> rows >> col;
	}
	int temp=0;
	int* matrix = new int[rows * col];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			cin >> *(matrix + i * rows + j) ;
		}
	}
	displayMatrix(matrix, rows, col);
	for (int i = 1; i < rows; i++) {
		for (int j = 0; j < i; j++) {
			 temp = *(matrix + i*rows + j) ;
			*(matrix + i*rows + j) = *(matrix + j*rows + i);
			*(matrix + j*rows + i) = temp;
		}
	}
	displayMatrix(matrix, rows, col);
}