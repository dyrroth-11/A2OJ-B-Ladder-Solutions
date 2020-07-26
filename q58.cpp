#include <bits/stdc++.h>
using namespace std;
long long s(long i)
{
    long long sum=0;
    while(i)
    {
        sum+=i%10;i=i/10;
    }return sum;
}
int main() {
unsigned long long n;
cin>>n;long temp;
long limit=sqrt(n);//if(n==2){cout<<1;exit(0);}
for(long i=max(1,(int)limit-1000);i<=limit;i++)
{
    if(n%i==0)
    {
    temp=n/i;if(temp==s(i)+i){cout<<i;return 0;}
    }
}cout<<-1;
	return 0;
}