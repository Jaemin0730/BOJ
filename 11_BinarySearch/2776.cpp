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

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int k = 0; k < t; k++) {
        vector<int> v;
        int n, m;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int num;
            cin >> num;
            int temp = upper_bound(v.begin(), v.end(), num) - lower_bound(v.begin(), v.end(), num);
            if (temp > 0) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
    }
}