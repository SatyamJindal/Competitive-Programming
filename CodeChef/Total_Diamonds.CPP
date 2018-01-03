#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[2000005];
    long long int b[1000001];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<2000005;i++)   // Calculating all sum values 
    {
        int even=0,odd=0;
        int num=i;
        while(num!=0)
        {
            int p=num%10;
            if(p%2==0) even+=p;
            else odd+=p;
            num/=10;
        }
        a[i]=abs(even-odd);
    }
    b[0]=0; b[1]=2; b[2]=12;
    for(int i=3;i<=1000001;i++)   // Calculating all values for all possible n 
    {
        b[i]=((((b[i-1]-b[i-2])-(2*a[i])))+a[(2*i)-2]+a[2*i]+(2*a[(2*i)-1]))+b[i-1];
    }
    //for(int i=0;i<10;i++) printf("%d\n",b[i]);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%lld\n",b[n]);
    }
} 