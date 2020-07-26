#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,temp;
	cin>>n>>k;
	int arr[k]={};
	for(int i=0; i<n; i++)
      {cin>>temp;
		arr[i%k]+=temp;}
	cout<<min_element(arr,arr+k)-arr+1;
 
    return 0;
}