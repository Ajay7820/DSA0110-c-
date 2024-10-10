#include <iostream>
using namespace std;
void generateFibonacci(int n) {
    int a = 0, b = 1, next;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; 
        } else {
            next = a + b;
            a = b;
            b = next; 
        }
        cout << next << " ";
    }
    cout << endl;
}
int main() {
    int terms;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> terms;
    generateFibonacci(terms);
    return 0;
}
