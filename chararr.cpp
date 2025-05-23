#include <bits/stdc++.h>
using namespace std;

int getLength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count;

}
char getMaxOccurence(string s){
    
    int arr1[26] = {0};
    // Storing count of letters present in the array 
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        int number = 0;
        
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';

        } else {
            number = ch - 'A';
        }
        arr1[number]++;
    }

    int maxi = -1, ans = -1;
    for(int i = 0; i<26; i++){
        if(maxi < arr1[i]) {
            ans = i;
            maxi = arr1[i];
        }
    }

    char finalAns = 'a'+ans;
    return finalAns;
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
    // char arr[100];
    // cout << "Enter your name :" <<endl;

    // cin >> arr;
    // cout << "Your name is " << arr <<endl;

    // int n = getLength(arr);
    // cout << "Length of your name is " << getLength(arr) <<endl;

    // reverse(arr,n);
    // cout << "Reverse of your name is " << arr <<endl;
    string s = "Output";
    cout << getMaxOccurence(s) <<endl;
    return 0;
}