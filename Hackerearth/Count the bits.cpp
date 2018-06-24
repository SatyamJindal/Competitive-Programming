#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<__builtin_popcount(n)<<"\n";
    }
}
