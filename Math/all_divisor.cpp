#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0)
            cout<<i<<" ";

            if(i != n/i)
            cout << n/i << " ";
    }
    return 0;
}



// class Solution {
//   public:
//     void print_divisors(int n) {
//         vector<int> large;

//         for(int i = 1; i * i <= n; i++) {
//             if(n % i == 0) {
//                 cout << i << " ";

//                 if(i != n/i)
//                     large.push_back(n/i);
//             }
//         }
//         for(int i = large.size() - 1; i >= 0; i--) {
//             cout << large[i] << " ";
//         }
//     }
// };