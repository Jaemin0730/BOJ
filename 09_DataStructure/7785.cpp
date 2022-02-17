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

map<string, string, greater<>> m;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        m[a] = b;
    }
    map<string, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        if (it->second == "enter") {
            cout << it->first << "\n";
        }
    }

    return 0;
}