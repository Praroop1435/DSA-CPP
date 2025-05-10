#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
     
    int mid = (start+end)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        } 
        if(key > arr[mid]){
            start = mid + 1;

        } else{
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    int even[6]={1,2,3,4,5,18};
    int odd[5]={1,2,3,4,5};

    int evenIndex = binarysearch(even,6,18);
    cout << "Index of 18 is " << evenIndex << endl;
    return 0;
}