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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[4];
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    int sol = abs((arr[0] + arr[3]) - (arr[1] + arr[2]));
    cout << sol;
}