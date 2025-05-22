#include<iostream>
using namespace std;

int getLength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count;

}

void reverse(char arr[],int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(arr[s++],arr[e--]);
    }

}
bool isPalindrome(string s) {
        int st = 0;
        int e = s.size() - 1;

        while (st < e) {
            // Skip non-alphanumeric from the start
            while (st < e && !isalnum(s[st])) {
                st++;
            }
            // Skip non-alphanumeric from the end
            while (st < e && !isalnum(s[e])) {
                e--;
            }

            // Compare lowercase characters
            if (tolower(s[st]) != tolower(s[e])) {
                return false;
            }
            st++;
            e--;
        }
        return true;
    }

int main(){
    char arr[100];
    cout << "Enter your name :" <<endl;
    cin >> arr;
    cout << "Your name is " << arr <<endl;
    int n = getLength(arr);
    cout << "Length of your name is " << getLength(arr) <<endl;
    reverse(arr,n);
    cout << "Reverse of your name is " << arr <<endl;
    return 0;
    string s = "My name is Parroop";
    cout << s <<endl;
}