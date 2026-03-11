/*Consider an algorithm that takes a positive integer n as input.
The algorithm follows these rules:
If n is even, divide it by 2.
If n is odd, multiply it by 3 and add 1.
Repeat this process until n becomes 1.
Your task is to simulate this algorithm and print all values of n during the process, including the starting value and the final value 1.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin>>n;
    int x=0;
    while(n!=1)
    {
        cout<<n<<" ";

        if(n%2==0)
        {
            n=n/2;

        }
        else
        {
            n=n*3+1;

        }


    }
    cout<<1;


    return 0;
}
