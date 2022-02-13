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
    for (int i = 0; i < 3; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    cout << max(v[2] - v[1], v[1] - v[0]) - 1;
}