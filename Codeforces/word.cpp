#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
    string s;
    cin >> s;
    int up=0;
    int low=0;
    int i;
    for(int i=0;i<s.size();i++){
    	if(s[i]>='A' && s[i]<='Z') up++;
    	if(s[i]>='a' && s[i]<='z')	low++;
    }
    if(up>low){
    	for(int i=0;i<s.size();i++){
     s[i] = toupper(s[i]);

   	  }
    }
    else{
    	for(int i=0;i<s.size();i++){
    	s[i] = tolower(s[i]);

    	}
    }
    cout << s;


}