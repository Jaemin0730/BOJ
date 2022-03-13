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

int n, m;
int r[10];
bool b[10];

void back(int k) {
    if (k == m) {
        for (int i = 0; i < m; i++) {
            cout << r[i] << " ";
        }
        cout << "\n";
        return ;
    }
    for (int i = 1; i <= n; i++) {
        if (!b[i]) {
            b[i] = true;
            r[k] = i;
            back(k + 1);
            b[i] = false;
        }
    }
}

int main(int argc, char **argv)
{
    g();
    cin >> n >> m;
    back(0);
}