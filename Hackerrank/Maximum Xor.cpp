#include<bits/stdc++.h>
using namespace std;

int ma;

struct node
{
    int val;
    node *child[2];
};

void insert(node *trie,int x,int ind)
{
    if(ind<0) return;
    
    int k = (x>>ind)&1;
    
    if(!trie->child[k])
    {
        trie->child[k] = new node;
    }
    insert(trie->child[k],x,ind-1);
}

void query(node *trie,int x,int ind)
{
    if(ind<0) return;
    
    int k = (x>>ind)&1;
    k^=1;
    if(!trie->child[k])
    {
        k^=1;
    }
    ma = (ma<<1)|k;
    
    query(trie->child[k],x,ind-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    
    int n,x;
    cin>>n;
    
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    node *trie = new node;
    
    for(int i=0;i<n;i++)
    {
        insert(trie,a[i],31);
    }
    
    int q;
    cin>>q;
    
    
    while(q--)
    {
        cin>>x;
        ma=0;
        query(trie,x,31);
        cout<<(ma^x)<<"\n";
    }
}
