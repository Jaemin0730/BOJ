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
using namespace std;
#define ll long long

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    z();
    int arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    int a = arr[1] - arr[0];
    int b = arr[2] - arr[1];
    if (a == b) {
        cout << arr[2] + a << "\n";
    }
    else {
        cout << arr[0] + arr[2] - arr[1] << "\n";
    }
}