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
    int k;
    cin >> k;
    while(1) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        if (n % k == 0) {
            cout << n << " is a multiple of " << k << "." "\n";
        }
        else {
            cout << n << " is NOT a multiple of " << k << "." << "\n";
        }
    }
}