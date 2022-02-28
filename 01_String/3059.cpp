#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define ll long long

void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    g();
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int alp[26] = {0,};
        int cnt = 0;
        string s;
        cin >> s;
        /*
        int cnt = 2015;
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            cnt -= (int)s[j];
        }
        cout << cnt << "\n";
        */
        for (int j = 0; j < s.length(); j++) {
            alp[s[j] - 'A'] = 1;
        }
        for (int j = 0; j < 26; j++) {
            if (alp[j] == 0) {
                cnt += j + 'A';
            }
        }
        cout << cnt << "\n";
    }
}