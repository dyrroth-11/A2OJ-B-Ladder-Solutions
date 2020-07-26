#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n,m,y,x;
cin>>n>>m;
int arr[n]={};
  int t[3]={};
for(int i=0;i<3;i++){
    cin>>x;
    arr[x-1]=i+1;
}
for(int j=1;j<m;j++){
 
    x=0;y=0;
    for(int i=0;i<3;i++){
        cin>>t[i];
        if(arr[t[i]-1]!=0){x=arr[t[i]-1];y=i;}
    }
    if(x>0){
        if(y==0){
            if(x==1){arr[t[1]-1]=2;
                     arr[t[2]-1]=3;
            }
            else if(x==2){arr[t[1]-1]=1;
                     arr[t[2]-1]=3;
            }
            else if(x==3){arr[t[1]-1]=1;
                     arr[t[2]-1]=2;}
        }
        else if(y==1){if(x==1){arr[t[2]-1]=2;
                     arr[t[0]-1]=3;
            }
            else if(x==2){arr[t[2]-1]=1;
                     arr[t[0]-1]=3;
            }
            else if(x==3){arr[t[2]-1]=1;
                     arr[t[0]-1]=2;}}
        else if(y==2){if(x==1){arr[t[0]-1]=2;
                     arr[t[1]-1]=3;
            }
            else if(x==2){arr[t[0]-1]=1;
                     arr[t[1]-1]=3;
            }
            else if(x==3){arr[t[0]-1]=1;
                     arr[t[1]-1]=2;}
            }
    }
    else{
    for(int i=0;i<3;i++){
        arr[t[i]-1]=i+1;}
      }
 
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}