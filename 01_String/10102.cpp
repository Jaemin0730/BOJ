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
    int t;
    cin >> t;
    string s;
    cin >> s;
    int a = 0;
    int b = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A') {
            a++;
        }
        else {
            b++;
        }
    }
    if (a > b) {
        cout << "A";
    } else if (a < b) {
        cout << "B";
    }
    else {
        cout << "Tie";
    }
}