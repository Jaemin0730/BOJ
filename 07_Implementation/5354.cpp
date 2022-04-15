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

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    z();
    int t;
    cin >> t;
    while (1) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << "#\n";
            cout << "\n";
            t--;
            if (t == 0) {
                break;
            }
            continue;
        }

        for (int i = 0; i < n; i++) {
            cout << "#";
        }
        cout << "\n";
        for (int i = 0; i < n - 3; i++) {
            cout << "#";
            for (int j = 0; j < n - 2; j++) {
                cout << "J";
            }
            cout << "#";
            cout << "\n";
        }
        if (n >= 3) {
            cout << "#";
            for (int j = 0; j < n - 2; j++) {
                cout << "J";
            }
            cout << "#";
            cout << "\n";
        }
        if (n >= 2) {
            for (int i = 0; i < n; i++) {
                cout << "#";
            }
        }
        t--;
        if (t == 0) {
            break;
        }
        cout << "\n";
        cout << "\n";
    }
}