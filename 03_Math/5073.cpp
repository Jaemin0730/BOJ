#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define p pair<int, int>

int main(void)
{
    u;
    while (1) {
        int a[3];
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        string s;
        sort(a, a + 3);
        if (a[0] == 0 && a[1] == 0 && a[2] == 0)
            break;
        if (a[2] >= a[1] + a[0]){
            s = "Invalid";
        }
        else if (a[0] != a[1] && a[1] != a[2] && a[0] != a[2]) {
            s = "Scalene";
        }
        else {
            if (a[0] == a[1] && a[1] == a[2]) {
                s = "Equilateral";
            }
            else {
                s = "Iscosceles";
            }
        }
        cout << s << "\n";
    }
}
