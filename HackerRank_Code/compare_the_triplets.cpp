//https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true
#include <bits/stdc++.h>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int x = 0, y = 0;

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            x++;
        }
        else if (a[i] < b[i]) {
            y++;
        }
    }

    return {x, y};
}

int main() {
    vector<int> a(3), b(3);

    // input for a
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    // input for b
    for (int i = 0; i < 3; i++) {
        cin >> b[i];
    }

    vector<int> result = compareTriplets(a, b);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}
