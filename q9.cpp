#include <bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int a=s.length()-1;
    for (int i=0;i<s.length()-1;i++)
        if ((s[i] - '0') % 2 == 0)
        {a = i;
         if (s[s.length()-1] > s[i]) break;}
         if (s.length()-1==a)
        cout << -1 << endl;
    else {swap(s[a], s[s.length()-1]);
        cout << s << endl;}
 
    return 0;
}