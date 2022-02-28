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

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        stack<int> st;
        for (int j = 0; j < s.length(); j++) {
            if (st.empty()) {
                st.push(s[j]);
            }
            else if (st.top() == s[j]) {
                st.pop();
            }
            else {
                st.push(s[j]);
            }
        }

        if (st.empty()) {
            count++;
        }
    }
    cout << count;
}