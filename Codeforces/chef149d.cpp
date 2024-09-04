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
    string s;
    cin >> s;
    priority_queue<int>pq;
    ll ans=0;
    int cnt=1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i+1]) cnt++;
        else{
            pq.push(cnt);
            cnt=1;
        }
    }
    pq.push(cnt);
    while(pq.size()>1){
        int num = pq.top();
        pq.pop();
        num--;
        if(num > 0)pq.push(num);
        ans+=pq.size()-1;
    }
    cout << ans << endl;

}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

