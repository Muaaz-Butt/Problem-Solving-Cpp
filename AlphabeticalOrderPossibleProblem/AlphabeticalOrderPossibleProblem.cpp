#include<iostream>
#include<string>
using namespace std;


int main()
{
    char alphabets[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    int n;
    cin >> n;
    string* array = new string[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    string word;
    bool flag = true;
    int length;
    int j = 0, k = 0;
    for (int i = 0; i < n; i++) {
        k = 0;
        j = 0;
        word = array[i];
        length = word.length();
        while (j < length) {
            flag = true;
            while (k < 26 && flag) {
                if (word[j] == alphabets[k]) {
                    flag = false;
                    k--;
                }
                if (k == 25) {
                    cout << "YES" << endl;
                }
                k++;
            }
            j++;
            if (!flag && j == length) {
                cout << "NO" << endl;
            }
        }
    }

}