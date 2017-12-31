#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,a,b;
    cin>>n>>q;
    int row[n],col[n];
    memset(row,0,sizeof(row));
    memset(col,0,sizeof(col));
    for(int i=0;i<q;i++)
    {
        char s[6];
        cin>>s;
        cin>>a>>b;
        if(s[0]=='R') row[a-1]+=b;
        else col[a-1]+=b;
    }
    int max1=row[0],max2=col[0];
    for(int i=1;i<n;i++)
    {
    if(row[i]>max1) max1=row[i];
    if(col[i]>max2) max2=col[i];
    }
    cout<<max1+max2<<endl;
    
    
}