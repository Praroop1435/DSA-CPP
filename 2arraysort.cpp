#include <iostream>
#include <algorithm>
using namespace std;

int mergeindex(int arr[], int arr1[]) {
    int mergearr[10];
    for (int i = 0; i < 5; i++) {
        mergearr[i] = arr[i];
        mergearr[5 + i] = arr1[i];
    }
    sort(mergearr, mergearr + 10);
    int median = mergearr[4];
    return median;
}

int main() {
    int arr[5], arr1[5];
    cout << "Give the parameters for 1st array:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "Give the parameters for 2nd array:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }
    cout << "Median number is " << mergeindex(arr, arr1) << endl;
    return 0;
}
