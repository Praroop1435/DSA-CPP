#include <iostream>
using namespace std;

int printSum(int arr[][3],int row,int col){ //Row wise print Biggest sum
    int maxi = INT_MIN;
    int rowIndex = -1;
    
    for(int i =0; i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        if(sum>maxi){
            maxi= sum;
        }
        rowIndex = i;
    }
    cout << "Biggest Sum is " << maxi <<endl;
    return rowIndex;
}

int main(){
    int arr[3][3];

    for(int i =0; i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }

    for(int i =0; i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << printSum(arr,3,3) << endl; 

return 0;
}
