#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    int temp = 1;
    for (int i = 0; i < a; i++) {
        cout << temp;
        if (i != a - 1) {
            cout << ", ";
        }
        temp += 2;
    }
    cout << endl;
    return 0;
}
