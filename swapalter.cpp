#include <iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}
int swapalter(int arr[],int n)
{
    for(int i=0;i<n;i=i+2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{
    int even[6]={2,1,4,3,6,5};
    int odd[5]={1,2,3,4,5};
    swapalter(even, 16);
    printarray(even,6);

    swapalter(odd, 5);
    printarray(odd,5);

    return 0;
}
