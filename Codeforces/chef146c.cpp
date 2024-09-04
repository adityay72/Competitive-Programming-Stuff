#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    vector<int>a(16);
    vector<pair<int,int>>b;
    for(int i=0;i<16;i++){
        cin >> a[i];
    }
    for(int i=0;i<16;i++){
        b.push_back({a[i],i});
    }
    sort(b.rbegin(),b.rend());
    vector<int>result(16);
    int index=0;
    result[b[index++].second] =4;
    for(int i=0;i<8;i++){
        result[b[index++].second] =3;
    }
    for(int i=0;i<4;i++){
        result[b[index++].second] =2;
    }
    for(int i=0;i<2;i++){
        result[b[index++].second] =1;
    }
    result[b[index].second] =0;
    for(int i=0;i<16;i++){
        cout << result[i] << " " ;
    }
    cout << endl;


}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

