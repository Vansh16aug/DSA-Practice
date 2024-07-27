#include<bits/stdc++.h>
using namespace std;

int func(string str) {
    int n = str.length();
    if (n < 2) return n; // For strings with less than 2 characters

    int count = 2; // Starting count for the first and last character

    for (int i = 1; i < n - 1; i++) {
        if (str[i] != str[i - 1] && str[i] != str[i + 1]) {
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    getline(cin, str);
    int ans = func(str);
    cout << ans << endl;
    return 0;
}
