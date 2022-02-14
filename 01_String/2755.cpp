#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <iomanip>
using namespace std;

double score(string s)
{
    if (s == "A+")
    {
        return 4.3;
    }
    else if (s == "A0")
    {
        return 4.0;
    }
    else if (s == "A-")
    {
        return 3.7;
    }
    else if (s == "B+")
    {
        return 3.3;
    }
    else if (s == "B0")
    {
        return 3.0;
    }
    else if (s == "B-")
    {
        return 2.7;
    }
    else if (s == "C+")
    {
        return 2.3;
    }
    else if (s == "C0")
    {
        return 2.0;
    }
    else if (s == "C-")
    {
        return 1.7;
    }
    else if (s == "D+")
    {
        return 1.3;
    }
    else if (s == "D0")
    {
        return 1.0;
    }
    else if (s == "D-")
    {
        return 0.7;
    }
    else if (s == "F")
    {
        return 0.0;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int count = 0;
    double temp;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        string name, s;
        int c;
        cin >> name >> c >> s;
        count += c;
        temp = score(s);
        sum += temp * double(c);
    }
    double sol = sum / (double)count;
    sol += 0.000000000001;
    cout << fixed << setprecision(2) << sol << "\n";
    
    return 0;
}