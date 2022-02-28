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
    string s;
    cin >> s;
    int fst = 0;
    int scd = 0;
    int sol = 0;
    char start = 'A';
    for (int i = 0; i < s.length(); i++) {
        fst = abs(s[i] - start);
        scd = 26 - fst;
        start = s[i];
        sol += min(fst, scd);
    }
    cout << sol;
}