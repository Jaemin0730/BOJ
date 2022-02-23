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

void hni(int n, int start, int mid, int end)
{
    if (n == 1) {
        cout << start << " " << end << "\n";
    }
    else {
        hni(n - 1, start, end, mid);
        cout << start << " " << end << "\n";
        hni(n - 1, mid, start, end);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << (int)pow(2, n) - 1 << "\n";
    hni(n, 1, 2, 3);
}