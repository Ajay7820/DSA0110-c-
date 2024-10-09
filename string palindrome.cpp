#include<iostream>
#include<string>
using namespace std;
int main() {
    string str, reversedStr = "";
    cout << "Enter a string: ";
    getline(cin, str); 
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    if (str == reversedStr) {
        cout <<str<< " is a palindrome.";
    } else {
        cout <<str<< " is not a palindrome.";
    }

    return 0;
}
