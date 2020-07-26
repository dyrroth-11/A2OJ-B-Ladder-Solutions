#include <iostream>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n,ia,ib,a=0;
    cin>>n;
   long long  int arr[n];
    for(long long int i=0;i<n;i++) cin>>arr[i];
    for(long long int i=0;i<n-1;i++){
        if((arr[i+1]<arr[i])&&(a==0)){a=1;ia=i+1;}
        if((arr[i+1]>arr[i])&&(a==1)) {a=2;ib=i+1;}
        if((arr[i+1]<arr[i])&&(a==2)) {cout<<"no";return 0;}
    }
 
    if(a==1) ib=n;
    if(a==0) ia=ib=1;
    if((arr[ia-1]>arr[ib] && ib<n) || (ia>1 && arr[ib-1]<arr[ia-2])){cout<<"no";return 0;}
    cout<<"yes\n"<<ia<<" "<<ib;
    return 0;
}