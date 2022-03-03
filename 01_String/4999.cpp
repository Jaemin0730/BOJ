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
    string n, m;
    cin >> n >> m;
    int lenn = n.length();
    int lenm = m.length();
    if (lenn >= lenm) {
        cout << "go";
    }
    else {
        cout << "no";
    }
}