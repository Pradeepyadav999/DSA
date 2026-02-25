#include<iostream>
#include<vector>
#include<cctype>
using namespace std;

bool isPangram(string s) {

    vector<bool> seen(26, false);
    int count = 0;

    for(char ch : s) {

        if(isalpha(ch)) {

            ch = tolower(ch);

            if(!seen[ch - 'a']) {
                seen[ch - 'a'] = true;
                count++;
            }
        }
    }

    return count == 26;
}

int main() {

    string s;

    cout << "Enter sentence: ";
    getline(cin, s);

    cout << boolalpha << isPangram(s);

    return 0;
}