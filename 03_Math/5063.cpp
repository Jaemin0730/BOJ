#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int r, e, c;
        cin >> r >> e >> c;

        if (r < e - c)
        {
            cout << "advertise" << "\n";
        }
        else if (r == e - c)
        {
            cout << "does not matter" << "\n";
        }
        else if (r > e - c)
        {
            cout << "do not advertise" << "\n";
        }
    }
    return 0;
}