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
#include <set>
using namespace std;
#define ll long long

void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

string s;
stack<char> c;
int cnt = 0;

int main(void)
{
    g();
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            c.push(s[i]);
        }
        else {  // ")" 일때!!
            if (c.empty())
            {
                cnt++;
            }
            else
            {
                c.pop();
            }
        }
    }
    cnt += c.size();
    cout << cnt;
}