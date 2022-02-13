#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int n;
int k;
int sol = 0;
vector<int> v;

void re(int m, int p)
// m : 만드는 숫자 , p : 만드는 숫자의 자릿수
{
    if (n < m) {
        return;
    }
    sol = max(sol, m);
    cout << m << " " << sol << "\n";
    for (int i = 0; i < v.size(); i++) {
        re(m + v[i] * p, p * 10);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    re(0, 1);
    cout << sol;
}