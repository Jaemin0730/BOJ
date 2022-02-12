#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    int sum = 0;
    for (int i = 0; i < 5; i++){
        int num;
        cin >> num;
        sum += num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    cout << sum / 5 << "\n";
    cout << v[5 / 2] << "\n";

    return 0;
}