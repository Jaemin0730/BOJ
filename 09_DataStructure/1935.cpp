#include <bits/stdc++.h>
using namespace std;
#define ll long long

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

stack<double> st;

int main(void)
{
    z();
    int n;
    double a[26];
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < s.length(); i++) {
        if ('A' <= s[i] && s[i] <= 'Z') {
            st.push(a[s[i] - 'A']);
            // 순서 정해진 알파벳의 해당 값들을
            // Stack에 넣어준다!!
        }
        else {
            if (!st.empty()) {
                double d = st.top();
                st.pop();
                // d에다가 top 값을 저장하고,
                // top은 pop 해준다!
                if (s[i] == '+') {
                    d = st.top() + d;
                }
                else if (s[i] == '-') {
                    d = st.top() - d;
                }
                else if (s[i] == '*') {
                    d = st.top() * d;
                }
                else if (s[i] == '/') {
                    d = st.top() / d;
                }
                // 각 해당 연산을 d에다가 누적해준다.
                st.pop();
                st.push(d);
                // top 값을 이미 사용했기에 pop 해준다.
                // 그리고 계산과정이 끝난 d를 push 해준다!!
            }
        }
    }
    cout << fixed;
	cout.precision(2);
    cout << st.top();
}