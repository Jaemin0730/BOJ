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

int v[301][301];

int main(void)
{
    g();
    int t, a, b;
    cin >> t;
    for (int k = 0; k < t; k++) {
        vector<int> v1;
        vector<int> v2;
        cin >> a >> b;
        int sol = 0;
        for (int i = 0; i < a; i++) {
            int n;
            cin >> n;
            v1.push_back(n);
        }
        sort(v1.begin(), v1.end());
        for (int i = 0; i < b; i++) {
            int n;
            cin >> n;
            v2.push_back(n);
        }
        sort(v2.begin(), v2.end());
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                if (v1[i] > v2[j]) {
                    sol++;
                }
                else {
                    break;
                }
            }
        }
        cout << sol << "\n";
    }
}