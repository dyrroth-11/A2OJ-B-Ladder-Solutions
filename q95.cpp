/*
    ıllıllı 𝔻𝓎Ｒｒ𝕠𝐭𝐇 ıllıllı
 
*/
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
#define pb push_back
#define mk make_pair
 
double pi=3.141592653589793238;
const int M = 1e9+7;
const int Nmax=3001;
const int MM = 1e5+2;
 
 
int main(){
int T=1;
//cin>>T;
while(T--){
    string S;
    cin>>S;
    vector<string> ans;
    for(int i=0;i<S.size();i++)
    {
        string sub="";
        while(S[i]!='@'&&i<S.size())
            sub+=S[i],i++;
        if(sub.size()==0){cout<<"No solution";return 0;}
        sub+='@';i++;
        if(i>=S.size()){cout<<"No solution";return 0;}
        if(S.find('@',i)==string::npos)
        {
            sub+=S.substr(i);
            ans.push_back(sub);
            break;
        }
        string after;
        if(i<S.size()&&S[i]=='@'){cout<<"No solution";return 0;}
        else
        {
            if(i<S.size())
            sub += S[i];
            ans.push_back(sub);
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        if(i)cout<<',';
        cout<<ans[i];
    }
}
return 0;
}
 
/*_*/