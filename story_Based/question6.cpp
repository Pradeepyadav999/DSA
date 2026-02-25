#include<iostream>
#include<vector>
using namespace std;

bool isDivisibleByk(vector<int> &arr, int k){
    int size=arr.size();
    int i=0,j=size-1;
    while(i<j){
        int sum=arr[i]+arr[j];
        if(sum%k!=0) return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}
int main(){
    int n;
    int k;
    cout<<"Enter size of Array:";
    cin>>n;
    vector<int>arr(n);
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Arr element is:";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout<<"Enter vaue of k:";
    cin>>k;
    int result=isDivisibleByk(arr,k);
    if(result)
        cout << "true";
    else
        cout << "false";
    return 0;
}