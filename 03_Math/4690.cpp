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

void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    g();
    for (int i = 6; i <= 100; i++)
    {
        for (int j = 2; j < i; j++)
        {
            for (int k = j + 1; k < i; k++)
            {
                for (int l = k + 1; l < i; l++)
                {
                    if (i * i * i == j * j * j + k * k * k + l * l * l)
                        cout << "Cube = " << i << ", Triple = (" << j << ',' << k << ',' << l << ")\n";
                }
            }
        }
    }
}