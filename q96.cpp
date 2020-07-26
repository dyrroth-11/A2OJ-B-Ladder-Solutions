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
    string myName;
    cin>>myName;
	int N;
	cin >> N;
	cin.ignore();
	map<string, int> dict;
	for(int i=0; i<N; i++){
		string line;
		getline(cin, line);
		for(int i=0; i<line.length(); i++){
			if(line[i] == '\''){
				line[i] = ' ';
			}
		}
		stringstream ss(line);
		vector<string> ws;
		string str;
		while(ss>>str) ws.push_back(str);
		if(ws[1] == "posted"){
			string a = ws[0], b = ws[3];
			dict[a] += 0; dict[b] += 0;
			if(a == myName || b == myName){
				dict[a] += 15;
				dict[b] += 15;
			}
		}
		else if(ws[1] == "commented"){
			string a = ws[0], b = ws[3];
			dict[a] += 0; dict[b] += 0;
			if(a == myName || b == myName){
				dict[a] += 10;
				dict[b] += 10;
			}
		}
		else if(ws[1] == "likes"){
			string a = ws[0], b = ws[2];
			dict[a] += 0; dict[b] += 0;
			if(a == myName || b == myName){
				dict[a] += 5;
				dict[b] += 5;
			}
		}
	}
	vector<pair<int, string> > ans;
	for(map<string,int>::iterator itr = dict.begin(); itr != dict.end(); itr++){
		if(itr->first != myName){
			ans.push_back( make_pair(-(itr->second), itr->first));
		}
	}
	sort(ans.begin(), ans.end());
	for(int i=0; i<ans.size(); i++){
		cout << ans[i].second << endl;
	}
}
return 0;
}
 
/*_*/