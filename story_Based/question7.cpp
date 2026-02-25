#include<iostream>
#include<vector>
using namespace std;
bool findLastGem(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==i*i) return true;
    }
    return false;
}
int main(){
    int size;
    cout<<"Enter size of Array:";
    cin>>size;
    vector<int>arr(size);
    cout << "Enter elements:\n";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Arr element is:";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    int result=findLastGem(arr);
    if(result)
        cout << "true";
    else
        cout << "false";
    return 0;
}