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
#include <iomanip>
using namespace std;
#define ll long long

void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

list<char> l;
list<char>::iterator p; // 커서의 위치

int main(int argc, char **argv)
{
    g();
    int t;
    cin >> t;
    while (t > 0) {
        string s;
        cin >> s;
        l.clear();
        p = l.begin();
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '<') {
                if (p != l.begin())
                    p--;
            }
            else if (s[i] == '>')
            {
                if (p != l.end())
                    p++;
            }
            else if (s[i] == '-')
            {
                if (p != l.begin())
                    p = l.erase(--p);
            }
            else {
                l.insert(p, s[i]);
            }
        }
        list<char>::iterator it;
        for (it = l.begin(); it != l.end(); it++)
            cout << *it;
        cout << "\n";
        t--;
    }
}