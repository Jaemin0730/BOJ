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

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;
    int len = b.length() - a.length();
    int sol = 987654321;
    for (int i = 0; i <= len; i++) {
        int count = 0;
        int t = 0;
        for (int j = i; j < i + a.length(); j++) {
            if (a[t] != b[j]) {
                count++;
            }
            t++;
        }
        sol = min(sol, count);
    }
    cout << sol;
}