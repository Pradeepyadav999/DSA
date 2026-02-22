#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int maximum=INT_MIN;
    while(n>0){
        int digit=n%10;
        maximum=max(maximum,digit);
        n=n/10;
    }
    cout<<"Largest Number: "<<maximum;
    return 0;
}