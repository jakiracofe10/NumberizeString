#include <iostream>

using namespace std;

//Time: O(n)
//Space: O(n)

string numberizeString(string s) {
    string result = "";
    if (!s.empty()) {
        int curCount = 1;
        for (int i = 0; i < s.length(); i++) {
            char curChar = s[i];
            if (i+1 < s.length() && curChar == s[i+1]) {
                curCount++;
            } else {
                result += curChar;
                result += to_string(curCount);
                curCount = 1;
            }
        }
    }
    return result;
}

int main() {
    string input = "wwwwaaadexxxxxx";
    string result = numberizeString(input);
    cout << result;
    return 0;
}