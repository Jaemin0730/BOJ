#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn cout << "\n"

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    //z();
    double a, b, c;
    int i = 1;
    while (1) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        double sol;
        cout << "Triangle #" << i << "\n";
        i++;
        if (a == -1) {
            sol = sqrt(c * c - b * b);
            if (sol > 0) {
                printf("a = %.3f\n", sol);
            }
            else {
                cout << "Impossible.\n";
            }
        }
        if (b == -1) {
            sol = sqrt(c * c - a * a);
            if (sol > 0) {
                printf("b = %.3f\n", sol);
            }
            else {
                cout << "Impossible.\n";
            }
        }
        if (c == -1) {
            sol = sqrt(a * a + b * b);
            if (sol > 0) {
                printf("c = %.3f\n", sol);
            }
            else {
                cout << "Impossible.\n";
            }
        }
        cout << "\n";
    }
}