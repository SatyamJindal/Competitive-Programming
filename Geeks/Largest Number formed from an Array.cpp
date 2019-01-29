#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
    int num1,num2;
    int l1=1,l2=1;
    while(l1<=b)
        l1*=10;
    while(l2<=a)
        l2*=10;
    num1 = a*l1 + b;
    num2 = b*l2 + a;
    return (num1>num2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n,cmp);
        string ans;
        for(int i=0;i<n;i++)
            ans+=to_string(a[i]);
        cout<<ans<<"\n";
    }
}
