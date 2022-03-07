#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <stdlib.h>
using namespace std;
#define ll long long
void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
/*
bool tf(int num) {
    if(num == 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main(void)
{
    g();

    while (1)
    {
        int n;
        cin >> n;
        int cnt = 0;
        if (n == 0)
        {
            break;
        }
        for (int i = n + 1; i <= 2 * n; i++)
        {
            if(tf(i)) {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}
*/

#define max 123456 * 2 + 1
int m[max];

int main(void)
{
    g();
    for (int i = 2; i < max; i++)
    {
        m[i] = i;
    }
    for (int i = 2; i * i < max; i++)
    {
        if (m[i] == i)
        {
            for (int j = i * i; j < max; j += i)
            {
                if (m[j] == j)
                {
                    m[j] = i;
                }
            }
        }
    }
    while (true)
    {
        int n;
        cin >> n;
        int cnt = 0;
        if (n == 0)
            break;
        for (int i = n + 1; i <= 2 * n; i++)
        {
            if (m[i] == i) {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}
