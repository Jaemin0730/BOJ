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

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int aSum = 0, bSum = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            aSum += (a + b);
        }
        else if (a < b)
        {
            bSum += (a + b);
        }
        else
        {
            aSum += a;
            bSum += b;
        }
    }
    cout << aSum << " " << bSum << "\n";
    return 0;
}