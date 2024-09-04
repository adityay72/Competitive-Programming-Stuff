#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
 string s;
 cin >> s;
 set<char> S;

 for(int i=0;i<s.size();i++){
 	S.insert(s[i]);

 }
 int n;
 
 if(S.size() %2==0)cout << "CHAT WITH HER!";
 	else cout << "IGNORE HIM!";
}