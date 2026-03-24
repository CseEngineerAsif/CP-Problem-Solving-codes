
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long l;
    cin >> n >> l;

    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    double maxGap = 0;
    for(int i = 1; i < n; i++) {
        maxGap = max(maxGap, (a[i] - a[i-1]) / 2.0);
    }

    double startGap = a[0];
    double endGap = l - a[n-1];

    double d = max({maxGap, startGap, endGap});

    cout << fixed << setprecision(10) << d << endl;

    return 0;
}
