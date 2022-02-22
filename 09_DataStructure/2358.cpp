#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

map<int, int> mx;
map<int, int> my;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        mx[x]++;
        my[y]++;
    }
    int count = 0;
    map<int, int>::iterator it;
    for (it = mx.begin(); it != mx.end(); it++) {
        if (it->second >= 2) {
            count++;
        }
    }
    for (it = my.begin(); it != my.end(); it++) {
        if (it->second >= 2) {
            count++;
        }
    }
    cout << count;
}