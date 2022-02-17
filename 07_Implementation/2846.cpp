
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[1000];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int sol = 0;
    for (int i = 0; i < n; i++) {
        int dif = 0;
        int s = arr[i];
        for (int j = i + 1; j < n; j++) {
            if (s < arr[j] && arr[j - 1] < arr[j]) {
                // 오르막길 최대까지 dif 구해준다!
                dif = arr[j] - s;
            }
            else {
                break;
            }
            
        }
        sol = max(sol, dif);
    }
    cout << sol;
    return 0;
}