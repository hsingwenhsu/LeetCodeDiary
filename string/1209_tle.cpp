#include <iostream>
#include <regex>
#include <string>

using namespace std;

string removeHelper(string s, int k);
string removeDuplicates(string s, int k);

int main () {
    string testcase = "deeedbbcccbdaa";
    int k = 3;
    string ans = removeDuplicates(testcase, k);
    cout<<"ans: "<<ans<<endl;
}

string removeDuplicates(string s, int k) {
    // check if there are duplicates to be removed
    int i = 0;
    int n = s.length(); 
    while (i < n) {
        int j = i; 
        while (j < n && s[i] == s[j]) {
            j++;
        }

        if (j - i >= k) {
            s = removeHelper(s, k);
            cout<<"new s: "<<s<<endl;
            i = 0; 
            n = s.length();
            continue;
        }
        i = j;
    }
    return s;
}

string removeHelper(string s, int k) {
    // replace chars to be removed with # sign
    int i = 0; 
    int n = s.length();
    while (i < n) {
        int j = i;
        while (j < n && s[i] == s[j]) {
            j++;
        }

        if (j - i >= k) {
            for (int c = 0; c < k; c++) {
                s[i + c] = '#';
            }
        }
        i = j;
    }
    cout<<"resulting s: "<<s<<endl;
    return regex_replace(s, regex("#"), "");        
}