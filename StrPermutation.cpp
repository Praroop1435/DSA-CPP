#include <bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2) {
    int len1 = s1.length(), len2 = s2.length();
    if (len1 > len2) return false; //Edge case

    vector<int> count(26, 0);
    for (char c : s1) {
        count[c - 'a']++;
    }

    for (int i = 0; i < len2; i++) {
        count[s2[i] - 'a']--;
        if (i >= len1) {
            count[s2[i - len1] - 'a']++;
        }
        if (all_of(count.begin(), count.end(), [](int i){ return i == 0; })) {
            return true;
        }
    }

    return false;
}
int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";
    cout << (checkInclusion(s1, s2) ? "True" : "False") << endl;
    return 0;
}
