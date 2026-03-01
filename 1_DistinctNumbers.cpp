/* problem:You are given a list of n integers, and your task is to calculate the number of distinct values in the list.
Input
The first input line has an integer n: the number of values.
The second line has n integers x1,x2,....,xn.
Output
Print one integers: the number of distinct values. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<int> s;
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    
    cout << s.size() << endl;
    
    return 0;
}
