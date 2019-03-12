#include<bits/stdc++.h>
using namespace std;

int swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int part(int a[],int lo,int hi)
{
    int pivot = a[hi];
    int i=lo-1;
    for(int j=lo;j<hi;j++)
    {
        if(a[j]<=pivot)
        {
            i+=1;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[hi]);
    return (i+1);
}

void quicksort(int a[],int lo,int hi)
{
    if(lo<hi)
    {
        int pi = part(a,lo,hi);
        quicksort(a,lo,pi-1);
        quicksort(a,pi+1,hi);
    }
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
        quicksort(a,0,n-1);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
}
