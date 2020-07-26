#include <bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
double r,x1,x2,y1,y2,d;
int ans;
cin>>r>>x1>>y1>>x2>>y2;
r*=2;
d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
if((int)(d/r)==ceil(d/r)) ans=(int)(d/r);
else ans=(int)(d/r)+1;
 
cout<<ans;
    return 0;
}