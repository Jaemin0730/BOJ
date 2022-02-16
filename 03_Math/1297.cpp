#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <cmath>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int d, h, w;
    cin >> d >> h >> w;
    double x = sqrt(d * d + w * w);
    cout << (int) (h * d / x) << " " << (int) (w * d / x);
    return 0;
}