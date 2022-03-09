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
    int a, b;
    a = (int)(n * 0.78);
    b = (int)(n * 0.8 + n * 0.2 * 0.78);
    cout << a << " " << b;
}