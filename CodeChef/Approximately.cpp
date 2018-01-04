#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,k;
    cin>>t;
    vector<string> a;
    a.push_back("3");
    a.push_back(".");
    int d=103993,b=33102;
    int c=d%b;
    for(int i=0;i<1000001;i++)
    {
        c*=10;
        a.push_back(to_string(c/33102));
        c%=33102;
    }
    while(t--)
    {
        cin>>k;
        if(k==0) cout<<"3"<<endl;
        else
        {
            for(int i=0;i<k+2;i++)
            {
                cout<<a[i];
            }
            cout<<endl;
        }
    }

}