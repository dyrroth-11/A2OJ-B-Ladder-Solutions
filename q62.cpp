#include <bits/stdc++.h>
using namespace std;
char a[51][51],b[51][51];
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 int ax,ay,bx,by,xx,yy,s=0,ans=0;
 cin>>ax>>ay;
 for(int i=1;i<=ax;i++){
    for(int j=1;j<=ay;j++)cin>>a[i][j];
 }
  cin>>bx>>by;
 for(int i=1;i<=bx;i++){
    for(int j=1;j<=by;j++)cin>>b[i][j];
 }
 for(int x=-50;x<=50;x++){
    for(int y=-50;y<=50;y++){
    s=0;
      for(int i=1;i<=ax;i++){
        for(int j=1;j<=ay;j++){
            if(((i+x>=1)&&(i+x<=bx))&&((j+y>=1)&&(j+y<=by))){
                s+=(a[i][j]-'0')*(b[i+x][j+y]-'0');
              //  cout<<s<<" ";
            }
        }
      }
      if(s>=ans){
        ans=s;
        xx=x;
        yy=y;
       // cout<<s<<" "<<xx<<" "<<yy<<"\n";
      }
 
    }
 }
cout<<xx<<" "<<yy;
return 0;
}