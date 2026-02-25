#include<iostream>
#include<vector>
using namespace std;

int maxGuest(vector<int>& entry,vector<int>& leaving, int size){
    int maximum=0;
    int member=0;
    int present=0;
    for(int i = 0; i < size; i++) {
        member=present+entry[i]-leaving[i];
        present=member;
        maximum=max(maximum,present);
    }
    return maximum;
}

int main(){
    int time;
    cout<<"Enter limited Time:";
    cin>>time;

    vector<int> entry(time);
    vector<int> leaving(time);

    cout << "Enter elements in entry:\n";
    for(int i = 0; i < time; i++) {
        cin >> entry[i];
    }
    cout << "Entry is:";
    for(int i = 0; i < time; i++) {
        cout << entry[i] << " ";
    }
    cout<<endl;
    cout << "Enter elements in leaving:\n";
    for(int i = 0; i < time; i++) {
        cin >> leaving[i];
    }
    cout << "Leaving is:\n";
    for(int i = 0; i < time; i++) {
        cout << leaving[i] << " ";
    }
    cout << "Maximum guests at a time: "
         << maxGuest(entry, leaving, time);

    return 0;
}
