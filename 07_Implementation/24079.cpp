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

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double x, y, z;
    cin >> x >> y >> z;
    if(x + y <= z + 0.5) cout << 1;
    else cout << 0;
}