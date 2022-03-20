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

vector<int> v;

int main(void)
{
    g();
    int n, x, y;
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (k <= sqrt(x * x + y * y)) {
            cout<<"DA"<<"\n";
        }
        else {
            cout<<"NE"<<"\n";
        }
    }
}