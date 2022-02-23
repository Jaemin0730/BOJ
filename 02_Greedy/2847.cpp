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
#define ll long long

/*
vector<pair<int, int>> v;

bool vscp(pair<int,int>a,pair<int,int>b) {
    return a.first > b.first;
}
*/

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(make_pair(i,num));
    }
    sort(v.begin(), v.end(), vscp);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i].second <= v[i + 1].second) {
            count += (v[i + 1].second - (v[i].second - 1));
            v[i + 1].second = v[i].second - 1;
        }
    }
    cout << count;
    */

    int v[101];

    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll count = 0;
    for (int i = n - 1; i > 0; i--) {
        if (v[i] <= v[i - 1]) {
            count += v[i - 1] - (v[i] - 1);
            v[i - 1] = v[i] - 1;
            //cout << count << "\n";
        }
    }
    cout << count;
}