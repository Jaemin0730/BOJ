#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <list>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;
#define ll long long

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

float arr[10000005];

int main(void)
{
    z();
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + t, less<float>());
    cout << fixed << setprecision(3);
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << "\n";
    }
}