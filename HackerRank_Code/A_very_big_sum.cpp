//https://www.hackerrank.com/challenges/a-very-big-sum/problem
#include <bits/stdc++.h>
using namespace std;

long long aVeryBigSum(vector<long long> ar) {
    long long total = 0;

    for (int i = 0; i < ar.size(); i++) {
        total += ar[i];
    }

    return total;
}

int main() {
    int n;
    cin >> n;

    vector<long long> ar(n);

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    cout << aVeryBigSum(ar) << endl;

    return 0;
}
