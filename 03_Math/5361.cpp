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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double a[5] = {350.34, 230.9, 190.55, 125.3, 180.9}, sum;
    int n;
    cin >> n;
    while (n--)
    {
        sum = 0;
        for (int i = 0; i < 5; i++)
        {
            double x;
            cin >> x;
            sum += a[i] * x;
        }
        printf("$%.2f\n", sum);
    }
}