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
using namespace std;
#define ll long long

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    z();
    bool isTelemarketNum = true;
    int number[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> number[i];
        if ((i == 0 || i == 3) && !(8 <= number[i] && 9 >= number[i]))
        {
            isTelemarketNum = false;
        }
        if (i == 2 && number[i] != number[i - 1])
        {
            isTelemarketNum = false;
        }
    }
    cout << (isTelemarketNum ? "ignore\n" : "answer\n");
}