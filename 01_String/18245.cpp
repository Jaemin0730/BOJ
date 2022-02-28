#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define ll long long

void g(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
} 

int main(void)
{
    g();
    string s;
    int k = 2;
    while(1) {
        getline(cin, s);
        if (s == "Was it a cat I saw?") break;
        for (int i = 0; i < s.length(); i += k) {
            cout << s[i];
        }
        k++;
        cout << "\n";
    }
}