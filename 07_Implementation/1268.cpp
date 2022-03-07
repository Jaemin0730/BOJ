#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <set>
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
    int arr[1001][6];
    int s[1001];
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> arr[i][j];
        }
    }
    /*
    int cnt = 0;
    int sol = 0;
    int temp = -1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 5; j++) {
            for (int k = 1; k <= n; k++) {
                if (arr[i][j] == arr[k][j]) {
                    s[k]++;
                }
            }
            for (int k = 1; k <= n; k++) {
                if (s[k] != 0) {
                    cnt++;
                    s[k] = 0;
                }
            }
            if (temp < cnt) {
                temp = cnt;
                cnt = 0;
                sol = i;
            }
            else {
                cnt = 0;
            }
        }
    }
    cout << sol + 1;
    */
    for (int i = 1; i <= n; i++)
    { 
        for (int j = 1; j <= n; j++)
        { 
            for (int k = 1; k <= 5; k++)
            {
                if (arr[i][k] == arr[j][k])
                {
                    s[i]++;
                    break;
                }
            }
        }
    }
    int max = 0;
    int sol = 0;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] > max)
        {
            max = s[i];
            sol = i;
        }
        
        else if (s[i] == max)
        {
            if (sol > i)
            {
                sol = i;
            }
        }
    }

    cout << sol;
}