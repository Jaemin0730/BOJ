#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    int n;
    cin >> n;
    int a[n * n];
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n * n; i++) {
        cin >> a[i];
        //cout << a[i] << "??\n";
        pq.push(a[i]);
        if (pq.size() > n) {
            //cout << pq.top() << "!!\n";
            pq.pop();
        }
    }
    cout << pq.top();
    /* 
    vector<int> v(2550000);
    for (int i = 0; i < n * n; i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(), v.end(), greater<int>());
    cout << v[n - 1];
    */
}