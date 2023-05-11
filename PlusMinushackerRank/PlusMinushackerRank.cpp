#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double countForPositive = 0.0, countForNegative = 0.0, countForZero = 0.0;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            countForPositive++;
        }
        else if (arr[i] < 0) {
            countForNegative++;
        }
        else if (arr[i] == 0) {
            countForZero++;
        }
    }
    cout << fixed << setprecision(6);
    cout << countForPositive / n << endl << countForNegative / n << endl << countForZero / n;
}
