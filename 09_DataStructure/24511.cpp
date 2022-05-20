#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define p pair<int, int>

int main(void)
{
    u;
    int n, m, k;
    cin >> n;
    int a[n + 1];   // 0->큐, 1->스택
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        // 자료구조 종류
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        // 자료구조 초기 값 세팅
        cin >> k;
        // stack -> LILO임으로 고려 X
        // queue -> FILO임으로 이거만 고려하면 됨!
        if (a[i] == 0) {
            dq.push_back(k);
        }
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int h;
        cin >> h;
        dq.push_front(h);
        // 맨 마지막 값 출력하고
        cout << dq.back() << " ";
        // 그 출력한 값을 제외시키기!
        dq.pop_back();
    }
}