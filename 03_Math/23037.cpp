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
    int sum = 0, v[5] = {0};
    for (int i = 0; i < 5; i++) {
        scanf("%1d", &v[i]);
        sum += pow(v[i], 5);
    }
    cout << sum;
}