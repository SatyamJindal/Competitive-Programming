#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int w,h,u1,d1,u2,d2;
	cin>>w>>h>>u1>>d1>>u2>>d2;
	while(h)
	{
		w+=h;
		if(h==d1) w-=u1;
		if(h==d2) w-=u2;
		w=max(w,0);
		h-=1;
	}
	cout<<w<<"\n";
	
}
