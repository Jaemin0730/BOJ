#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define pr pair<int, int>

int main(void)
{
    u;
    string s, a = "";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'U' && a.empty()) {
            a += 'U';
        }
        else if (s[i] == 'C' && a == "U") {
            a += 'C';
        }
        else if (s[i] == 'P' && a == "UC") {
            a += 'P';
        }
        else if (s[i] == 'C' && a == "UCP") {
            a += 'C';
        } 
    }
    if (a == "UCPC") {
        cout << "I love UCPC" << '\n';
    }
    else {
        cout << "I hate UCPC" << '\n';
    }
}