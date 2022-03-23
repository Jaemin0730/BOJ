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

void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    g();
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    cout << arr[1] << "\n";
}