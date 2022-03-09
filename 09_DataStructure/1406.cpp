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

list<char> l;

int main(int argc, char **argv)
{
    g();
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        l.push_back(s[i]);
    }
    int n;
    cin >> n;
    list<char>::iterator p = l.end();   // 커서 위치
    for (int i = 0; i < n; i++)
    {
        char k;
        cin >> k;
        if (k == 'L') {
            if (p != l.begin())
                p--;
        }
        else if (k == 'D') {
            if (p != l.end())
                p++;
        }
        else if (k == 'B')
        {
            if (p != l.begin())
                p = l.erase(--p);
                // 여기서 오류 엄청 발생함
                // 왜???
        }
        else if (k == 'P')
        {
            char q;
            cin >> q;
            l.insert(p, q);
        }
    }
    list<char>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it;
    }
}