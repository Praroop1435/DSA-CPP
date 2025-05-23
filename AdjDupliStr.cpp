#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(const string& s) {
    stack<char> stk;
    for (char c : s) {
        if (!stk.empty() && stk.top() == c) {
            stk.pop(); // Remove the duplicate
        } else {
            stk.push(c); // Add the character to the stack
        }
    }

    // Construct the result string from the stack
    string result;
    while (!stk.empty()) {
        result += stk.top();
        stk.pop();
    }
    // The characters are in reverse order, so reverse the string
    reverse(result.begin(), result.end());
    return result;
}

int main(){
    string s = "azxxzy";
    cout << removeDuplicates(s) << endl;
    return 0;
}