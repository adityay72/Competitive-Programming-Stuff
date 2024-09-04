#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
 	int n;
 	cin >> n;
 	vector<int>a(n);
 	map<int,vector<int>>m;
 	for(int i=0;i<n;i++){
 		cin >> a[i];
 		m[a[i]].pb(i);

 	}   
 	vector<int>b(n);
 	int flag =0 ;
 	for(auto &&i : m )
 		if(i.second.size()>=2)
 		{
 			if(flag == 0){
 				b[i.second[0]]=1;
 				for(int k=1;k<i.second.size();k++) b[i.second[k]]=3;
 			}
 			else {
 				b[i.second[0]]=1;
 				for(int k=0;k<i.second.size();k++) b[i.second[k]]=2;
 			}
 		flag++;
 		}else{
 			b[i.second[0]]=i.first;
 		}
 		if(flag <2){
 			cout << "-1"<<endl;
 		}
 		else{
 			for(auto &&j:b){
 				cout << j <<" ";
 			}
 			cout << endl;
 		}
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}