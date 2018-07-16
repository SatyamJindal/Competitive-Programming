#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,flag=0;
	cin>>n;
	int w,h;
	cin>>w>>h;
	int curr=max(w,h);
	for(int i=1;i<n;i++)
	{
		cin>>w>>h;
		if(curr<min(w,h)) flag=1;
		else
		{
			//if(w<h) swap(w,h);
			if(curr>=w && curr>=h) curr = max(w,h);
			else if(curr>=w && curr<h) curr=w;
			else curr=h;
		}
	}
	if(flag) cout<<"NO";
	else cout<<"YES";
}
