#include<iostream>
#include<string>
using namespace std;
int main() {
	int num;
	cin >> num;
	string arr[] = { "even","odd" };
	cout << arr[num % 2];
}