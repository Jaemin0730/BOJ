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
    int n;
    cin >> n;
    if (n % 8 >= 1 && n % 8 <= 5)
    {
        cout << n % 8;
    }
    else if (n % 8 == 6)
    {
        cout << "4\n";
    }
    else if (n % 8 == 7)
    {
        cout << "3\n";
    }
    else if (n % 8 == 0)
    {
        cout << "2\n";
    }
}