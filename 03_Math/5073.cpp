#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define p pair<int, int>

int main(void)
{
    u;
    while (1) {
        int a, b, c; 
        cin >> a >> b >> c; 
        if (a == 0 && b == 0 && c == 0) { 
            break;
        }
        int sides[3] = { a, b, c };
        sort(sides, sides + 3);
        if (sides[2] >= sides[1] + sides[0]) {
            cout << "Invalid\n"; continue; 
        }
        if (a == b && b == c && c == a) {
            cout << "Equilateral\n"; continue; 
        }
        if (a == b || b == c || c == a) {
            cout << "Isosceles\n"; continue; 
        } 
        cout << "Scalene\n";
    }
}

