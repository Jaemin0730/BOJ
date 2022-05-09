#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 200000

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int n;
deque<pair<int, int>> d;
// 원형 큐를 사용해서 풀자!!

int main(void)
{
    z();
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        d.push_back({k, i + 1});
    }
    // 빌 때까지 무한 반복 시키고자 함!
    while (1) {
        int save = d.front().first;
        cout << d.front().second << " ";
        d.pop_front();
        if (d.empty()) {
        // 정지 조건! -> deque가 empty인 경우
            break;
        }
        // 여기서 save번인지, save-1번인지 헷갈림ㅠㅠ
        if (save > 0) {
            for (int i = 0; i < save - 1; i++) {
            // 단순히 뒤로 보내는 과정이라 save-1번 반복함
                // 앞에 있는 원소를 뒤로 보냄
                d.push_back(d.front());
                d.pop_front();
            }
        }
        else {
            for (int i = 0; i < -save; i++) {
            // 앞으로 보내는 과정이라 save번 반복함
                // 뒤에 있는 원소를 앞으로 보냄
                d.push_front(d.back());
                d.pop_back();
            }
        }
    }
}