#include <bits/stdc++.h>
using namespace std;
 
int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s;
  cin>>s;
  if(s[0]=='-')
  cout<<'(';
  cout<<'$';
  int c=-1;
  vector<char> a;
  vector<char> b;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]>=48&&s[i]<=57)
      {
          if(c<0) a.push_back(s[i]);
          else b.push_back(s[i]);
      }
      if(s[i]=='.')
        c++;
  }
  for(int i=0;i<(a.size())%3;i++)
    cout<<a[i];
    if(a.size()%3!=0&&a.size()%3!=a.size())
        cout<<',';
  for(int i=(a.size())%3;i<a.size();i=i+3)
   {
    cout<<a[i]<<a[i+1]<<a[i+2];
    if(i<a.size()-3)
        cout<<',';
   }
  if(c<0)
  cout<<'.'<<"00";
  else
  {
      cout<<'.';
      if(b.size()==1)
        cout<<b[0]<<"0";
      else
        cout<<b[0]<<b[1];
  }
  if(s[0]=='-')
    cout<<')';
 
return 0;
 
}