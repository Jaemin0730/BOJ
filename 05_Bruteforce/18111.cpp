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
int s[501][501];
int maxx = 0;
int minn = 987654321;

int mc(int h)
{
    int t = 0;
    int v = b;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] < h)
            {
                v -= h - s[i][j];
                t += h - s[i][j];
            }
            else if (s[i][j] > h)
            {
                v += s[i][j] - h;
                t += (s[i][j] - h) * 2;
            }
        }
    }

    if (v < 0)
    {
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> s[i][j];
            maxx = max(maxx, s[i][j]);
            minn = min(minn, s[i][j]);
        }
    }
    int h = 0;
    int time = 987654321;
    int temp;

    for (int i = minn; i <= maxx; i++)
    {
        temp = mc(i);
        // 구하려는게 걸린 시간 + 최대 높이
        // 최대 높이는 그냥 mc(i)!!

        if (temp == -1)
        {
            continue;
        }
        /*
        if (time >= temp)
        {
            h = i;
            time = temp;
        }
        */
        h = i;
        time = temp;
    }
    cout << time << " " << h;
    // 시간, 높이 출력하자!
    return 0;
}