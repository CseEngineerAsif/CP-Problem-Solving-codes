#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, left = 0;
    cin >> n;
    map<int, int>mp;
    int maximum = 0;
    for(int right = 0; right <n; right++){
        int temp;
        cin>>temp;
        if(mp.find(temp)!=mp.end() && mp[temp] >=left){
             left = mp[temp]+1;
        }
        mp[temp] = right;
        maximum = max(maximum, right-left+1);
    }
    cout<<maximum;
}
