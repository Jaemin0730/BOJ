#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int arr[50][50];

    int counta = 0;
    int countb = 0;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            char star;
            cin >> star;
            arr[i][j] = star;
        }
    }

    for (int i = 0; i < a; i++) {
        int count = 0;
        for (int j = 0; j < b; j++) {
            if (arr[i][j] == 'X') {
                count++;
            }
        }
        if (count == 0) {
            countb++;
        }
    }

    for (int i = 0; i < b; i++) {
        int count = 0;
        for (int j = 0; j < a; j++) {
            if (arr[j][i] == 'X') {
                count++;
            }
        }
        if (count == 0) {
            counta++;
        }
    }

    if (counta >= countb) {
        cout << counta;
    }
    else {
        cout << countb;
    }
    return 0;
}