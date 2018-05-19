#include<bits/stdc++.h>
using namespace std;

int a[1000005];

void sieve()
{
    //memset(a,1,sizeof(a));
    a[0]=1;a[1]=1;
    int start=2;
    while(start*start<=1000005)
    {
        if(a[start]==0)
        {
            for(int i=start*2;i<1000005;i+=start)
            {
                a[i]=1;
            }
        }
        start+=1;
    }
}

int main()
{
    int n;
    cin>>n;
    sieve();
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0) count+=1;
    }
    cout<<count;
}
