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
#define ll long long

/*
map<int, int> m;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        m[num]++;
    }
    int count = 0;
    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        if (it->second > 1) {
            count++;
        }
    }
    cout << count;
}
*/

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[101] = {0};
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        if (arr[num] == 0) {
            arr[num] = 1;
            continue;
        }
        else {
            count++;
        }
    }
    
    cout << count;
}