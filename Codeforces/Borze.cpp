#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    string ans;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
    	if(s[i]=='.'){
    		cout << "0";
    		i++;
    	}
    	 if(s[i]=='-' && s[i+1]=='.'){
    		cout << "1";
    		i++;
    	}
    	 if(s[i]=='-'&& s[i+1]=='-'){
    		cout << '2';
    		i++;
    	}


    }
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}
