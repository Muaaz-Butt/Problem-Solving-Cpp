#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
	string eq;
	cout << "Enter equation: ";
	getline(cin, eq);
	char sign = '+';
	int length = eq.length();
	int i = 0, j = 0, k = 1;
	while (i < length) {
		if (eq[i] == sign) {
			k++;
		}
		i++;
	}
	int* num = new int[k];
	i = 0;
	while (i < length) {
		num[j] = 0;
		while (eq[i] != sign && i < length) {
			num[j] = (num[j] * 10 + (eq[i] - 48));
			i++;
		}
		i++;
		j++;
	}
	int sum = 0;
	for (int i = 0; i < k; i++) {
		sum = sum + num[i];
	}
	cout << sum;
}