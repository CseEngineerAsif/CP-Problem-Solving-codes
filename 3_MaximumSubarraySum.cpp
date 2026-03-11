#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n];

    for(long long i=0; i<n; i++)
        cin >> arr[i];

    long long current_sum = arr[0];
    long long max_sum = arr[0];

    for(long long i=1; i<n; i++) {
        if(current_sum < 0)
            current_sum = arr[i];
        else
            current_sum += arr[i];

        if(current_sum > max_sum)
            max_sum = current_sum;
    }

    cout << max_sum << endl;
    return 0;
}
