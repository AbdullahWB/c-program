#include <bits/stdc++.h>
using namespace std;

bool isAlphabetic(const string &word) {
    return all_of(word.begin(), word.end(), [](char c) {
        return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
    });
}

int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int cnt = 0;
    while (ss >> word) {

        // if (isAlphabetic(word)) {
        //     cnt++;
        // }
    }
    cout << cnt << endl;
    return 0;
}
