#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of vector: " << endl;
    cin>>n;
    vector<int> numbers(n);
    cout << "Enter the elements of vector: " << endl;
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    // or case for direct vector 
    // vector<int> numbers = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30}
    map<int, int> freqmap;
    for (int i = 1; i <= 9; i++) {
        freqmap[i] = 0;
    }
    for (int divisor = 1; divisor <= 9; divisor++) {
        for (int num : numbers) {
            if (num % divisor == 0) {
                freqmap[divisor]++;
            }
        }
    }
    cout << "The Frequency map for given input vector is: " << endl;
    cout << "{";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << freqmap[i];
        if (i != 9) cout << ", ";
    }
    cout << "}" << endl;
    return 0;
}
