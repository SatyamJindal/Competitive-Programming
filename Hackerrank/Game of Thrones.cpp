#include<bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin>>s;
    int a[26];
    memset(a,0,sizeof(a));
    for(int i=0;s[i]!='\0';i++) a[s[i]-'a']+=1;
    int odd=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]%2!=0) odd+=1;
        if(odd>1) break;
    }
    if(odd<2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
