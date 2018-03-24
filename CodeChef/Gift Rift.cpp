#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long max1;
	long long r,c;
	cin>>r>>c;
	long long a[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	int flag=0;
	for(int i=0;i<r;i++)
	{
		vector<int> indi;
		long long min1 = a[i][0];
		for(int j=1;j<c;j++)
		{
			if(a[i][j]<min1) min1=a[i][j];
		}
		//cout<<"min1"<<min1<<endl;
		for(int j=0;j<c;j++)
		{
			if(a[i][j]==min1)
			{
				indi.push_back(j);
			}
		}
		//for(int j=0;j<indi.size();j++) cout<<"ele"<<j+1<<indi[j]<<endl;
		for(int j=0;j<indi.size();j++)
		{
			int ind = indi[j];
			max1=a[0][ind];
			//cout<<"max1 "<<max1<<endl;
			for(int k=0;k<r;k++)
			{
				if(a[k][ind]>max1) max1=a[k][ind];
			}
			//cout<<"max111  "<<max1<<endl;
			//cout<<"min1 "<<min1<<endl;
			if(max1==min1)
			{
				//cout<<"yo"<<endl;
				flag=1;
				break;
			}
			//cout<<"max1 "<<max1<<endl;
			if(flag==1) break;
		}
		//cout<<max1<<" "<<max1<<endl;
		if(flag==1) break;
	}
	if(flag==0) cout<<"GUESS"<<endl;
	else cout<<max1<<endl;
}
