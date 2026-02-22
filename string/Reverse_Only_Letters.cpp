#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    // string reverseOnlyLetters(string s) {
    //     string letters = "";

    //     // Step 1: collect all letters into a string
    //     for (char c : s) {
    //         if (isalpha(c)) letters += c;
    //     }

    //     // Step 2: put letters back in reverse order
    //     int n = letters.size();
    //     for (int i = 0; i < s.size(); i++) {
    //         if (isalpha(s[i])) {
    //             s[i] = letters[--n];  // take letters from end
    //         }
    //     }

    //     return s;
    // }


     string reverseOnlyLetters(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(!isalpha(s[left])){
                left++;
                continue;
            }
            if(!isalpha(s[right])){
                right--;
                continue;
            }
            swap(s[left],s[right]);
            left--;
            right++;
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s = "a-bC-dEf-ghIj";
    cout << sol.reverseOnlyLetters(s) << endl;
}
