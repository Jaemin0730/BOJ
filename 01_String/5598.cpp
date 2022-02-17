
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    char c[1001];
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if ('D' <= s[i] && s[i] <= 'Z') {
            s[i] = s[i] - 3;
        }
        else if (s[i] == 'A') {
            s[i] = 'X';
        }
        else if (s[i] == 'B')
        {
            s[i] = 'Y';
        }
        else if (s[i] == 'C')
        {
            s[i] = 'Z';
        }
    }
    for (int i = 0; i < s.length(); i++) {
        cout << s[i];
    }
        return 0;
}