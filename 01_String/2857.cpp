#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    vector<int> a;
    for (int i = 1; i <= 5; i++) {
        string s;
        cin >> s;
        if (s.find("FBI", 0) != string::npos) {
            a.push_back(i);
        }
    }
    if (a.empty()) {
        cout << "HE GOT AWAY!";
    }
    else {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
    }
}