#include <bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
int a,b;
cin>>a>>b;
string temp;
string arr[2*b];
for(int i=0;i<2*b;i++){
    cin>>arr[i];
    }
    for(int j=0;j<a;j++){
        cin>>temp;
        for(int i=0;i<2*b;i++){
    if(temp.compare(arr[i])==0){
        if(i%2==0){
            if(arr[i].length()>arr[i+1].length()) cout<<arr[i+1]<<" ";
            else cout<<arr[i]<<" ";
        }
        else{
             if(arr[i-1].length()>arr[i].length()) cout<<arr[i]<<" ";
            else cout<<arr[i-1]<<" ";
        }
    }
    }
    }
}