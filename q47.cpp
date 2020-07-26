#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
long double a,b,c,d,ans;
cin>>a>>b>>c>>d;
ans=(a*d/(b*d-(b-a)*(d-c)));
cout<<setprecision(12)<<ans;
    return 0;
}