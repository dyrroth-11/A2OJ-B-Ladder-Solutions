#include <bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
long long int n,a=0,ma=0,x;
cin>>n;
x=s.length();
long long int arr[26]={0};
for(int i=0;i<26;i++){cin>>arr[i];if(arr[i]>ma) ma=arr[i];}
for(int i=0;s[i];i++){
    a=a+arr[(s[i])-'a']*(i+1);
}
a+=(((x+n)*(x+n+1)-(x+1)*x)/2)*ma;
cout<<a;
 
 
    return 0;
}