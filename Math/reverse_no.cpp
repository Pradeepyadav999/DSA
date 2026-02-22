#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Number:";
    int n;
    cin>>n;
    long long rev = 0;
    while(n!=0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n=n/10;
    }
    cout<<"Reversed Number:"<<rev;
    return 0;
}