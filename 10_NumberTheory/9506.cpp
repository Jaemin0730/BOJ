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

    while (1)
    {
        int N;
        cin >> N;
        if (N == -1)
        {
            break;
        }
        cout << N;
        vector<int> v;
        int sum = 0;
        for (int i = 1; i <= N / 2; i++)
        {
            if (N % i == 0)
            {
                v.push_back(i);
                sum += i;
            }
        }
        if (sum == N)
        {
            cout << " = ";
            for (int i = 0; i < v.size() - 1; i++)
            {
                cout << v[i] << " + ";
            }
            cout << v[v.size() - 1] << "\n";
            continue;
        }

        cout << " is NOT perfect.\n";
    }
    return 0;
}