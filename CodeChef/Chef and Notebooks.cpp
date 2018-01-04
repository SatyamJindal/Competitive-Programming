#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,k,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>k>>n;
        int pages=x-y,flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            if(a>=pages && b<=k)
            {
                flag=1;
            }
        }
        if(flag==1) cout<<"LuckyChef"<<endl;
        else cout<<"UnluckyChef"<<endl;
    }
    

}