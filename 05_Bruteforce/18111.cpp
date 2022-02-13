#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int n, m, b;
int s[502][502];
int maxx = 0;
int minn = 987654321;

int mc(int h) {
    int t = 0;
    int v = b;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][j] < h) 
            {
                v -= h - s[i][j];
                t += h - s[i][j];
            }
            else if (s[i][j] > h)
            {
                v += h - s[i][j];
                t += (h - s[i][j]) * 2;
            }
        }
    }

    if (v < 0) {
        return -1;
    }
    else {
        return t;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> b;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> s[i][j];
            maxx = max(maxx, s[i][j]);
            minn = min(minn, s[i][j]);
        }
    }
    int h = 987654321;
    int time = 0;
    int temp = 0;

    for (int i = minn; i <= maxx; i++) {
        temp = mc(i);
        // 구하려는게 걸린 시간 + 최대 높이
        // 최대 높이는 그냥 mc(i)!!

        if (temp == -1) {
            continue;
        }
        else {
            h = temp;
            time = i;
        }
    }
    cout << time << " " << h;
    return 0;
}