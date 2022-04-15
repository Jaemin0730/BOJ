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

priority_queue<int> pq;

int main(void)
{
    z();
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        if (a == 0) {
            if (pq.empty()) {
                cout << "-1\n";
            }
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else {
            while (a--)
            {
                int n;
                cin >> n;
                pq.push(n);
            }
        }
    }
}