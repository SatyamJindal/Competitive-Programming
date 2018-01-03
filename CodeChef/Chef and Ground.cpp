#include <iostream>
using namespace std;

int main() {
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n];
        cin>>a[0];
        int max=a[0];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>max) max=a[i];
        }
        int count=0;
        for(int i=0;i<n;i++) count+=(max-a[i]);
        if(count==m || (count-m)%n==0)
        {cout<<"Yes"<<endl;}
        else cout<<"No"<<endl;
    }
	// your code goes here
	return 0;
}