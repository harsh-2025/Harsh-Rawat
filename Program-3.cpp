#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
  // edge case from problem 2 for even number
    if (a % 2 == 0) {
        a = a - 1;
    }
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
