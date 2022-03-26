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


bool tf(int N) {
    if (N < 2)
        return false;
    else if (N == 2)
        return true;
    else if (N % 2 == 0)
        return false;
    else
        for (int i = 3; i * i <= N; i += 2)
            if (N % i == 0)
                return false;
    return true;
}



int main(void)
{
    g();
    int n, m, p;
    cin >> n >> m;
    p = n + 1000000 * m;
    if(tf(p) && tf(n)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}