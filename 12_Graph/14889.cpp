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

int n;
int v[22][22];
bool b[22];
int sol = 9999;


void comb(int k, int m) {
    if (m == (n / 2))
    {
        int s = 0;
        int l = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (b[i] == true && b[j] == true) {
                    s += v[i][j];
                }
                if (b[i] == false && b[j] == false){
                    l += v[i][j];
                }
            }
        }
        sol = min(sol, abs(s - l));
        return;
    }
    for (int i = k; i <= n; i++) {
        /*
        if (!b[i])
        {
            b[i] = true;
            //cout << i << " " << m << "\n";
            comb(i++, m++);
            //cout << i  << " " << m << "----" << "\n";
            b[i] = false;
        }
        */
        b[i] = true;
        cout << i << " " << m << "\n";
        comb(i + 1, m + 1);
        cout << i  << " " << m << "----" << "\n";
        b[i] = false;
    }
}

/*
void comb(int k, int m) {
    vector<int> s;
    vector<int> l;
    int sp = 0;
    int lp = 0;
    if (m == (n / 2)) {
        for (int i = 1; i <= n; i++) {
            if(b[i]) {
                s.push_back(i);
            }
            else {
                l.push_back(i);
            }
        }
        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < n / 2; j++) {
                if(i==j) continue;
                sp += v[s[i]][s[j]];
                lp += v[l[i]][l[j]];
            }
        }
        sol = min(sol, abs(sp - lp));
        return;
    }
    else {
        for (int i = k; i <= n; i++)
        {
            if(b[i]) {
                continue;
            }
            else {
                b[i] = true;
                comb(i++, m++);
                b[i] = false;
            }
        }
    }
}
*/

int main(void)
{
    g();
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> v[i][j];
        }
    }
    comb(1, 0);
    cout << sol;
    return 0;
}