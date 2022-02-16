#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <cmath>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int wsum = 0;
    int ksum = 0;
    vector<int> w;
    vector<int> k;
    int num;

    for (int i = 0; i < 10; i++) 
    {
        cin >> num;
        w.push_back(num);
    }
    sort(w.begin(), w.end(), greater<int>());
    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        k.push_back(num);
    }
    sort(k.begin(), k.end(), greater<int>());

    for (int i = 0; i < 3; i++) 
    {
        wsum += w[i];
    }
    for (int i = 0; i < 3; i++)
    {
        ksum += k[i];
    }
    cout << wsum << " " << ksum;
    return 0;
}