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
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        cout << "String #" << i << "\n";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'Z') {
                cout << "A";
            }
            else{
                cout << (char)(s[i] + 1);
            }
        }
        cout << "\n";
        cout << "\n";
    }
}