#include<bits/stdc++.h>
using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	string s;
	int t,a[26];
	cin>>t;
	while(t--)
	{
		int even=0,odd=0,count=0,flag=0;
		for(int i=0;i<26;i++) a[i]=0;
		cin>>s;
		int satyam[s.size()];
		for(int i=0;s[i]!='\0';i++) a[s[i]-'a']+=1;
		for(int i=0;i<26;i++)
		{
			if(a[i]>0) count+=1;
			if(a[i]%2==0 && a[i]>0) even+=1;
			else if(a[i]%2!=0 && a[i]>0) odd+=1;
		}
		if(count==1)
		{
			for(int i=0;s[i]!='\0';i++)
			{
				cout<<i+1<<" ";
			}
			cout<<endl;
		}
		else if(s.size()%2==0 && odd>0) cout<<-1<<endl;
		else if(s.size()%2!=0 && odd>1) cout<<-1<<endl;
		else if(even==0 && odd>0) cout<<-1<<endl;
		else
		{
			vector< vector<int> > a1(26);
			for(int i=0;s[i]!='\0';i++)
			{
				satyam[i]=0;
				a1[int(s[i])-97].push_back(i+1);
			}
			int sat=0;
			for(int i=0;i<a1.size();i++)
			{
				if(a1[i].size()==1)
				{
					satyam[s.size()/2]=a1[i][0];
					flag=1;
				}
				else if(a1[i].size()>0)
				{
					for(int j=0;j<a1[i].size();j++)
					{
						if(j%2==0 && a1[i].size()%2==0)
						{
							satyam[sat]=a1[i][j];
							satyam[s.size()-1-sat]=a1[i][j+1];
							sat+=1;
						}
						if(j%2==0 && a1[i].size()%2!=0 && j!=a1[i].size()-1)
						{
							satyam[sat]=a1[i][j];
							satyam[s.size()-1-sat]=a1[i][j+1];
							sat+=1;
						}
					}
				}
			}
			if(s.size()%2!=0 && flag==0)
			{
				int ind=0;
				for(int i=0;i<a1.size();i++)
				{
					if(a1[i].size()%2!=0)
					{
						ind=i;
						break;
					}
				}
				satyam[s.size()/2]=a1[ind][a1[ind].size()-1];
			}
			for(int i=0;i<s.size();i++)
			{
				cout<<satyam[i]<<" ";
			}
			cout<<endl;
			
		}
		
	}
	
	
}
