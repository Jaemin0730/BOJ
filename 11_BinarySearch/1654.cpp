#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int arr[10000];
    long long int n, k;
    long long int sol = 0;
    long long int maxx = 0;

    cin >> k >> n;
    for (long long int i = 0; i < k; i++) {
        cin >> arr[i];
        maxx = max(maxx, arr[i]);
    }

    long long int left = 1;
    long long int right = maxx;
    long long int mid;

    while (left <= right)
    {
        mid = (left + right) / 2;
        long long int sum = 0;

        for (long long int i = 0; i < k;i++){
            sum += arr[i] / mid;
        }

        if (sum >= n)
        {
            left = mid + 1;
            sol = max(sol, mid);
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << sol << "\n";
    return 0;
    }