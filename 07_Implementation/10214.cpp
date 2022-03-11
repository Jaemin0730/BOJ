#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <list>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;
#define ll long long

void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(int argc, char **argv)
{
    g();
    int T, Y[9], K[9], Ysum = 0, Ksum = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> Y[j] >> K[j];
            Ysum += Y[j];
            Ksum += K[j];
        }
        if (Ysum > Ksum)
        {
            cout << "Yonsei" << '\n';
        }
        else if (Ysum == Ksum)
        {
            cout << "Draw" << '\n';
        }
        else if (Ysum < Ksum)
        {
            cout << "Korea" << '\n';
        }
        Ysum = 0;
        Ksum = 0;
    }
}