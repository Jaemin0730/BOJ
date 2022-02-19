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

map<int, int> m;
int s[500001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, l;
    cin >> k >> l;
    for (int i = 0; i < l; i++) {
        cin >> s[i];
        m[s[i]] = i;
    }
    int n = 0;
    for (int i = 0; i < l; i++) {
        if (n == k) {
            break;
        }
        if (m[s[i]] == i) {
            printf("%08d\n", s[i]);
            n++;
        }
    }

        return 0;
}