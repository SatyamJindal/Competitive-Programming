#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> order;

int main()
{
	order sett;
	int n;
	cin>>n;
	while(n--)
	{
		char type;
		int x;
		cin>>type;
		cin>>x;
		
		if(type=='I')
		{
			sett.insert(x);
		}
		else if(type=='D')
		{
			sett.erase(x);
		}
		else if(type=='C')
		{
			cout<<sett.order_of_key(x)<<"\n";
		}
		else if(type=='K')
		{
			if(x>sett.size())
			{
				cout<<"invalid"<<"\n";
			}
			else
			{
				cout<<*sett.find_by_order(x-1)<<"\n";
			}
		}
	}
}
