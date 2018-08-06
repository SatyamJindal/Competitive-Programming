#include<bits/stdc++.h>
using namespace std;

long long freq[100005];
long long A[100005];

int main(){
	long long n;
	cin>>n;
	long long s = 0;
	set<long long> done;
	for(long long i=0;i<n;i++){
		cin>>A[i];
		freq[A[i]]++;
		if(freq[A[i]] == 1)s++;
	}
	long long ans = 0;
	for(int i=0;i<n;i++){
		freq[A[i]] --;
		if(freq[A[i]] == 0)s--;	
		
		if(done.find(A[i])!=done.end()) continue;
		
		done.insert(A[i]);
		
		ans+=s;
		
	}
	cout<<ans<<"\n";
	
}
