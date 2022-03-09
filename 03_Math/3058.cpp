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
#include <set>
using namespace std;
#define ll long long

void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    g();
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int sum = 0;
        int num = 99999;
        for (int j = 0; j < 7; j++) {
            int n;
            cin >> n;
            if (n % 2 == 0) {
                sum += n;
                num = min(num, n);
            }
        }
        cout << sum << " " << num << "\n";
    }
}