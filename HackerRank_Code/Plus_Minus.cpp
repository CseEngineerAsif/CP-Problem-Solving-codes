//https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true
#include <bits/stdc++.h>
using namespace std;

void plusMinus(vector<int> arr) {

    int n = arr.size();
    int positive = 0;
    int negative = 0;
    int zero = 0;

    for(int i=0;i<n;i++) {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else
            zero++;
    }


    cout << "Positive Ratio"<<(double)positive / n << endl;
    cout <<"Negative Ratio"<<(double)negative / n << endl;
    cout << "Zero"<<(double)zero / n << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    plusMinus(arr);

    return 0;
}
