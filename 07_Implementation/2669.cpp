
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

int box[101][101]={0,};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int sum = 0;
    for (int i = 0; i < 4; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int a = x1; a < x2; a++) {
            for (int b = y1; b < y2; b++) {
                box[a][b] = 1;
            }
        }
    }

    for (int i = 0; i < 101; i++) {
        for (int j = 0; j < 101; j++) {
            if (box[i][j] == 1) {
                sum++;
            }
        }
    }
    cout << sum;
    return 0;
}