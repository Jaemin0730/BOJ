#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

// vector<int> v;
/*
void coin(int k) {
    int count = 0;
    while(1) {
        if (k == 0)
        {
            cout << count;
            return;
        }
        if (k >= v.back())
        {
            k = k - (k / v.back()) * v.back();
            count += k / v.back();
            v.pop_back();
        }
    }
}
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    int arr[10];
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        /*
        int num;
        cin >> num;
        v.push_back(num);
        */
    }
    int count = 0;
    //sort(v.begin(), v.end(), greater<int>());
    for (int i = n - 1; i >= 0; i--) {
        
        if (k >= arr[i]) {
            count += k / arr[i];
            //k = k % arr[i];
            k = k - (k / arr[i]) * arr[i];
        }
        
    /*
        count += k / arr[i];
        k = k % arr[i];
    */
    }
    cout << count;
    
    return 0;
}