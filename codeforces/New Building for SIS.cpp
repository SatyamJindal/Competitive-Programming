#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n,h,a,b,k;
	cin>>n>>h>>a>>b>>k;
	for(int i=0;i<k;i++)
	{
		int ta,fa,tb,fb;
		cin>>ta>>fa>>tb>>fb;
		
		if(ta==tb) cout<<abs(fb-fa)<<"\n";
		else
		{
			if(fa>=a && fa<=b) cout<< abs(ta-tb) + abs(fa-fb)<<"\n";
			else
			{
				int mini = min(abs(fa-a),abs(fa-b));
				bool where  = (abs(fa-a)<abs(fa-b))?true:false;
				if(where)
				{
					cout<<abs(ta-tb) + abs(fa-a) + abs(fb-a)<<"\n";
				}
				else
				{
					cout<<abs(ta-tb) + abs(fa-b) + abs(fb-b)<<"\n";
				}
			}
			
		}
	}
}
