#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <cmath>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

vector<int> v;
vector<int> vc;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
        vc.push_back(num);
    }
    sort(vc.begin(), vc.end());
    vc.erase(unique(vc.begin(), vc.end()), vc.end());

    for (int i = 0; i < n; i++)
    {
        auto a = lower_bound(vc.begin(), vc.end(), v[i]);
        // 처음에 auto 개념을 몰라서 당황 + 시간 소비
        // 덕분에 auto 개념 하나 얻어간다 ㅎㅎ
        cout << a - vc.begin() << " ";
    }

    return 0;
}