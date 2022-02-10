#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

#define mod 1234567891

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin >> n >> s;

    long long int result = 0;
    long long int temp = 1;

    for (int i = 0; i < n; i++)
    {
        result += ((s[i] - 'a' + 1) * temp) % mod;
        temp *= 31;
        temp %= mod;
    }
    cout << result % mod;

    return 0;
}