#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,ele;
	cin>>n;
	multiset<long long,greater<int> > a;
	multiset<long long, greater<int> > b;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		a.insert(ele);
	}
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		b.insert(ele);
	}
	
	long long ans=0;
	for(int i = 0; i < n; i += 1){
		if(a.empty()) b.erase(b.begin());
		else{
			if(b.empty()){
				ans += *a.begin();
				a.erase(a.begin());
			}
			else{
				if(*a.begin() < *b.begin()) b.erase(b.begin());
				else{
					ans += *a.begin();
					a.erase(a.begin());
				}
			}
		}
		
		if(b.empty()) a.erase(a.begin());
		else{
			if(a.empty()){
				ans -= *b.begin();
				b.erase(b.begin());
			}
			else{
				if(*b.begin() < *a.begin()) a.erase(a.begin());
				else{
					ans -= *b.begin();
					b.erase(b.begin());
				}
			}
		}
	}
	cout<<ans;
	
}
