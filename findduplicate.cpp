#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n){
    int ans = 0;
    
    // XOR all array elements
    for(int i = 0; i < n; i++){
        ans ^= arr[i];
    }

    // XOR with numbers from 1 to n-2
    for(int i = 1; i < n; i++){
        ans ^= i;
    }

    return ans;
}

int main(){
    int arr[5] = {4,2,1,3,1};
    cout << findDuplicate(arr, 5);  // Output should be 1
}
