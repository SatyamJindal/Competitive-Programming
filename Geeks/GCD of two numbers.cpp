#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}


int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<gcd(a,b)<<"\n";
    }
}
