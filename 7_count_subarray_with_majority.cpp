#include <bits/stdc++.h>
using namespace std;


int countSubarrays(vector<int>& nums, int target) {
    int n = nums.size();
    int ans = 0;


    for(int i = 0; i < n; i++) {
        int countTarget = 0;

        for(int j = i; j < n; j++) {


            if(nums[j] == target) {
                countTarget++;
            }

            int len = j - i + 1;


            if(countTarget > len / 2) {
                ans++;
            }
        }
    }

    return ans;
}

int main() {
    int n, target;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> target;

    int result = countSubarrays(nums, target);

    cout << result << endl;

    return 0;
}
