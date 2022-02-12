#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int k = 0; k < t; k++) {
        int n;
        int sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            sum += num;
        }
        cout << sum << "\n";
    }
}