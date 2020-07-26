#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   long long  int n,m,mi,ma;
    cin>>n>>m;
    //for max
    ma=((n-m+1)*(n-m))/2;
    //for min
   mi=((m-n%m)*(n/m)*(n/m-1)/2) +  (n%m)*(n/m+1)*(n/m)/2;
    cout<<mi<<" "<<ma;
    return 0;
}