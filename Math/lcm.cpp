// LCM is big number multiple which is divisible by both the numbers
#include <iostream>
using namespace std;

// Worst case → O(a × b) ❌ (slow for big numbers)
// int lcm(int a, int b) {
//     int big = max(a, b);
//     int small = min(a, b);

//     int multiple = big;

//     while(true) {
//         if(multiple % small == 0)
//             return multiple;

//         multiple += big; 
//     }
// }

// O(log n) ->GCD
// LCM(a,b)=a*b/gcd(a,b)
int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a,b)) * b;
}
int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int result = lcm(a, b);

    cout << "LCM of " << a << " and " << b << " is: " << result << endl;

    return 0;
}