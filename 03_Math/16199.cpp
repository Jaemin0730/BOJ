#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define p pair<int, int>

int main(void)
{
    u
    int flag = 0;
    int a1, a2, a3;
    int b1, b2, b3;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    if (b1 - a1 == 0)
        flag = 0;
    else if (b1 - a1 == 1)
    {
        if (b2 == a2)
        {
            if (b3 >= a3) flag = 1;
            else flag = 0;
        }
        else if (b2 > a2) flag = 1;
        else flag = 0;
    }
    else
    {
        if (b2 == a2)
        {
            if (b3 >= a3) flag = 2;
            else flag = 1;
        }
        else if (b2 > a2) flag = 2;
        else flag = 1;
    }
    
    if(b1-a1<2)cout << flag << '\n' << b1 - a1 + 1 << '\n' << b1 - a1 << '\n';
    else cout << b1-a1 + flag - 2 << '\n' << b1 - a1 + 1 << '\n' << b1 - a1 << '\n';
}