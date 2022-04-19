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
    int n;
    cin >> n;
    double ff[n];
    for (int i = 0; i < n; i++) {
        cin >> ff[i];
    }
    for (int i = 0; i < n; i++) {
        printf("$%.2f\n",  ff[i] * 0.8);
    }
}