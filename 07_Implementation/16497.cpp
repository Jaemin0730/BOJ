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
    int arr[32] = {0,};
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        for (int j = x; j < y; j++) {
            arr[j]++;
        }
    }
    int k;
    cin >> k;
    int sol = 1;
    for (int i = 1; i <= 31; i++) {
        if (arr[i] > k) {
            sol = 0;
        }
    }
    cout << sol;
}