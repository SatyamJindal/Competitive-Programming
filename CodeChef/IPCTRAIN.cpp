#include<bits/stdc++.h>
using namespace std;

struct train{
  long long day;
  long long lect;
  long long sad;
};

bool comp(train a, train b)
{
    return a.sad<b.sad;
}

bool compd(train a, train b)
{
    return a.day<b.day;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,d;
        cin>>n>>d;
        long long tot=0,sum=0;
        int i=0;
        priority_queue<train,vector<train>,function<bool(train,train)> > qu(comp);
        train arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].day>>arr[i].lect>>arr[i].sad;
            tot+=arr[i].lect*arr[i].sad;
        }
        i=0;
        sort(arr,arr+n,compd);
        for(int k=1;k<=d;k++)
        {
            while(i<n && arr[i].day==k)
            {
                qu.push(arr[i]);
                i+=1;
            }
            if(qu.size()==0) continue;
            sum+=qu.top().sad;
            train a = qu.top();
            qu.pop();
            a.lect-=1;
            if(a.lect>0) qu.push(a);
        }
        cout<<tot-sum<<"\n";
    }
}
