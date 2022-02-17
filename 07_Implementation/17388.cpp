
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int s, k, h;
    cin >> s >> k >> h;
    
    if (s + k + h >= 100) {
        cout << "OK";
    }
    else {
        int minn;
        minn = min({s, k, h});
        if (minn == s)
        {
            cout << "Soongsil";
        }
        else if (minn == k)
        {
            cout << "Korea";
        }
        if (minn == h)
        {
            cout << "Hanyang";
        }
    }
    return 0;
}