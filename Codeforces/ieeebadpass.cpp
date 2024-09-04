#include <bits/stdc++.h>
using namespace std;

void solve(map<string,int>&mp){
    string oldp,newp;
    cin >> oldp >> newp;

        string oldSeq = "", newSeq = "";
    for(auto& seq : mp) {
        if(oldp.find(seq.first) != string::npos && seq.first.length() > oldSeq.length()) oldSeq = seq.first;
        if(newp.find(seq.first) != string::npos && seq.first.length() > newSeq.length()) newSeq = seq.first;
    }


    if(oldSeq != "" && newSeq != "" && mp[oldSeq]==mp[newSeq]){
    	cout << "REJECT"<<endl;
    }else{
    	cout << "OK"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    map<string,int>mp;

   for(int i=1;i<=n;i++){
   		int m;
   		cin >>m;
   		for(int j=0;j<m;j++){
   			string s;
   			cin >> s;
   			mp[s]=i;
   		}
   }

    int t;
    cin >> t;
    while (t--) {
        solve(mp);
    }
}
