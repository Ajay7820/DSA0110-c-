#include <iostream>
using namespace std;
int removeDuplicates(int arr[], int n) {
    int j = 0;
    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];
    arr[j++] = arr[n - 1];
    return j;
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    n = removeDuplicates(arr, n);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
