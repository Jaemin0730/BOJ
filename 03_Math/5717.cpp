#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
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
    while(1) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        cout << a + b << "\n";
    }
}