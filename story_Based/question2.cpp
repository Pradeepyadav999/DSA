#include<iostream>
#include <vector>
using namespace std;

void rowWithMaxZeros(vector<vector<int>> &matrix) {

    int maxZero = 0;
    int row = -1;

    for(int i = 0; i < matrix.size(); i++) {

        int count0 = 0;

        for(int j = 0; j < matrix[i].size(); j++) {
            if(matrix[i][j] == 0) {
                count0++;
            }
        }

        if(count0 > maxZero) {
            maxZero = count0;
            row = i;
        }
    }

    if(row == -1)
        cout << "No zeros found\n";
    else
        row=row+1;
        cout << "Row with maximum zeros: " << row << endl;
}

int main(){
    int r,c;

    cout<<"Enter  number of rows:";
    cin>>r;
    cout<<"Enter number of column:";
    cin>>c;
    vector<vector<int>> parking(r, vector<int>(c));
    cout << "Enter only 0 and 1:\n";    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> parking[i][j];

            // Validation
            while(parking[i][j] != 0 && parking[i][j] != 1) {
                cout << "Invalid input! Enter only 0 or 1: \n";
                cin >> parking[i][j];
            }
        }
    }
    rowWithMaxZeros(parking);

    return 0;
}