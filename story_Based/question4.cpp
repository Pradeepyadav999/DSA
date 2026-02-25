#include<iostream>
using namespace std;

int main() {

    string s;
    cout << "Enter string: ";
    cin >> s;

    int freq[256] = {0};   

    for(int i = 0; i < s.length(); i++) {
        char ch = tolower(s[i]);   // convert to lowercase bacause we treate lower and upper case is same 
        freq[s[i]]++;
    }

    int oddCount = 0;
    char firstOdd;

    for(int i = 0; i < s.length(); i++) {
        if(freq[s[i]] % 2 != 0) {
            firstOdd = s[i];
            oddCount++;
            break;   
        }
    }

    if(oddCount == 0)
        cout << "All are Even";
    else
        cout << "Odd number of ballon: " << firstOdd;

    return 0;
}