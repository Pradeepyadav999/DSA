#include<iostream>
#include<vector>
using namespace std;
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                bool left= (i==0) || (flowerbed[i - 1] == 0);
                bool right= (i==flowerbed.size()-1) || (flowerbed[i + 1] == 0);
                if(left && right) {
                    flowerbed[i] = 1;
                    n--;   // one flower planted
                    
                    if(n == 0)
                        return true;
                }
            }
        }
        return n<=0;
    }
int main(){
    int n;
    cout<<"Enter number of flower want to insert:";
    cin>>n;
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
    int result=canPlaceFlowers(arr,n);
    if(result)
        cout << "true";
    else
        cout << "false";
    return 0;
}