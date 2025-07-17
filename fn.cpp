#include <iostream>
using namespace std;
int maxfn(int arr[]){
    int maxl = 0;
    for(int i = 0; i<6; i++){
        if(arr[i] > maxl){
            maxl = arr[i];
        }
    }
    return maxl;
}
int main(){
    cout << "Give the parameters" << endl;
    int arr[5]; 
    for(int i =0;i<5; i++){
        cin >> arr[i];
    }
    cout <<"Maximum Parameter is " << maxfn(arr) << endl;
    return 0;

}