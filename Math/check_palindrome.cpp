#include<iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    long long rev = 0;

    while(n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return original == rev; 
}

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    
    if(isPalindrome(n))
        cout << "True (Palindrome)";
    else
        cout << "False (Not Palindrome)";

    return 0;
}