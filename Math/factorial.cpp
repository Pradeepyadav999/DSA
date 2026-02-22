// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number:";
//     cin>>n;
//     long long fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     cout<<"Factorial:"<<fact;
//     return 0;
// }


#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    cout<<"Factorial:"<<fact(n);
    return 0;
}