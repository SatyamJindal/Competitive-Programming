#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    int hash[101];
    memset(hash,0,sizeof(hash));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        hash[a[i]]+=1;
    }
    for(int i=0;i<n;i++)
    {
        if(hash[a[i]]==1)
        {
            cout<<a[i];
            break;
        }
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
