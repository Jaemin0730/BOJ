#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <list>
#include <cmath>
#include <set>
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
    string a,b;
    getline(cin, a);
    getline(cin, b);
    int p = 0;
    int cnt = 0;
    for (int i = 0; i < a.length(); i++) {
        int k = 0;
        for (int j = i; j < i + b.length(); j++) {
            if (a[j] == b[k]) {
                p++;
            }
            else {
                continue;
            }
            k++;
        }
        if (p == b.length()) {
            cnt++;
            i += b.length() - 1;
        }
        p = 0;
    }
    cout << cnt;
}