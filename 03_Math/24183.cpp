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
#include <iomanip>
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
    auto c4 = 0.229 * 0.324;
    auto a3 = 2 * 0.297 * 0.420;
    auto a4 = 0.210 * 0.297;

    double g1, g2, g3;
    cin >> g1 >> g2 >> g3;

    auto sum = 2 * g1 * c4 + g2 * a3 + g3 * a4;
    cout << fixed << setprecision(6) << sum;
}