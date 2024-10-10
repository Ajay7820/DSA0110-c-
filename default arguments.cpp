#include <iostream>
using namespace std;
int sum(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}
int main() {
    int a, b, c, d;
    cout << "Enter two values: ";
    cin >> a >> b;
    cout << "Sum of 2 values: " << sum(a, b) << endl;
    cout << "Enter three values: ";
    cin >> a >> b >> c;
    cout << "Sum of 3 values: " << sum(a, b, c) << endl;
    cout << "Enter four values: ";
    cin >> a >> b >> c >> d;
    cout << "Sum of 4 values: " << sum(a, b, c, d) << endl;
    return 0;
}
