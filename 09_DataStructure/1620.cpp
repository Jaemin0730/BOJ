
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

map<string, int> mp1;
map<int, string> mp2;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        mp1[s] = i;
        mp2[i] = s;
    }
    for (int i = 1; i <= m; i++) {
        string s;
        cin >> s;
        if (isdigit(s[0])) {
            // isdigit : 문자인지 숫자인지 참/거짓으로 판단해주는 역할!
            int k = stoi(s);
            auto it = mp2.find(k);
            cout << it->second << "\n";
        }
        else {
            auto it = mp1.find(s);
            cout << it->second << "\n";
        }
    }

    return 0;
}