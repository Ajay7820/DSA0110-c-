#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
float add(float a, float b) {
    return a + b;
}
int main() {
    int x = 5, y = 10;
    float p = 2.5, q = 3.5;

    cout << "Sum of integers: " << add(x, y) << endl;
    cout << "Sum of floats: " << add(p, q) << endl;
    return 0;
}
