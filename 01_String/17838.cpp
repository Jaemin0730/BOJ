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

void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    g();
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        if (s.length() == 7 && s[0] != s[2] && s[0] == s[1] && s[1] != s[2] && s[2] == s[3] && s[3] != s[4] && s[4] != s[5] && s[5] == s[6] && s[0] == s[4] && s[3] == s[5])
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }
}

/*
    #include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string a;
        cin >> a;

        if(a.size() != 7){
            cout << 0 << '\n';
            continue;
        }

        string A = "", B = "";
        A += a[0], B += a[2];

        string tmp = A+A+B+B+A+B+B;

        if(a == tmp){
            cout << 1 << '\n';
        }
        else cout << 0 << '\n';
    }
}

*/