#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    while(true) {
    cout << "Enter value of c (1, 2, 3, 4 only): ";
    cin >> c;
    if(c >= 1 && c <= 4)
        break;   // valid input
    else
        cout << "Invalid input! Try again.\n";
    }

    if(c==1){
        cout<<"Answer if c=1: "<<a+b;
    }else if(c==2){
        cout<<"Answer if c=2: "<<a-b;
    }else if(c==3){
        cout<<"Answer if c=3: "<<a*b;
    }else{
        cout<<"Answer if c=4: "<<a/b;
    }
    return 0;
}