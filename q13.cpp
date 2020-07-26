#include <bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int a,b,x,m=1000000007,f[6];
    cin>>a>>b>>x;
    f[1]=a%m;f[2]=b%m;f[3]=(b-a)%m;f[4]=(-a)%m;f[5]=(-b)%m;f[0]=(a-b)%m;
    cout<<(f[x%6]+m)%m;
    return 0;
}