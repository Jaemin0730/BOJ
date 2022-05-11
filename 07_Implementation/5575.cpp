#include <bits/stdc++.h>
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
    int h1, h2, m1, m2, s1, s2, h, m, s;
    for (int i = 0; i < 3; i++) {
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
        if (s2 < s1) {
            s = s2 + 60 - s1;
            m2--;
        }
        else {
            s = s2 - s1;
        }
        if (m2 < m1) {
            m = m2 + 60 - m1;
            h2--;
        }
        else {
            m = m2 - m1;
        }
        h = h2 - h1;
        cout << h << " " << m << " " << s << "\n";
    }
}