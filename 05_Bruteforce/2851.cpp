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

void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    g();
    int v[10];
    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        int s = sum + v[i];
        if (s >= 100) {
            if (s - 100 <= 100 - sum) {
                cout << s;
            }
            else {
                cout << sum;
            }
            return 0;
        }
        sum = s;
    }
    cout << sum;
}