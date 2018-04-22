#include<bits/stdc++.h>
using namespace std;


int main() {
    string s1,s2;
    cin>>s1>>s2;
    int a[26],b[26];
    for(int i=0;i<26;i++) { a[i]=0;b[i]=0; }
    for(int i=0;s1[i]!='\0';i++) a[s1[i]-'a']+=1;
    for(int i=0;s2[i]!='\0';i++) b[s2[i]-'a']+=1;
    int count=0;
    for(int i=0;i<26;i++) count+=max(a[i],b[i]) - min(a[i],b[i]);
    cout<<count<<'\n';
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
