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

int main(int argc, char **argv)
{
    g();
    int n;
    cin >> n;
    int cnt = 0;
    while (1)
    {
        if (n == 0) {
            cout << cnt;
            break;
        }
        if (n - 5 >= 0)
        {
            n -= 5;
            cnt++;
        }
        else if (n - 4 >= 0)
        {
            n -= 4;
            cnt++;
        }
        else if (n - 3 >= 0)
        {
            n -= 3;
            cnt++;
        }
        else if (n - 2 >= 0)
        {
            n -= 2;
            cnt++;
        }
        else if (n - 1 >= 0)
        {
            n -= 1;
            cnt++;
        }
    }
}