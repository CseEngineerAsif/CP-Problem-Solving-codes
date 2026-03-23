#include<bits/stdc++.h>
using namespace std;

int main(){
     long long n, m;
     cin>>n>>m;
     for(int i = 0; i<n; i++){
        int k = i % m;
        long long basket;
        if((m+k)&1){
            basket = (m+k+1)/2;
        }else{
            basket = (m-k)/2;
        }
        cout<<basket<<endl;
     }
}
