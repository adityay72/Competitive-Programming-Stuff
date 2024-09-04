    #include <bits/stdc++.h>
    typedef long long ll;
    #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
    using namespace std;
    #define fr(n) for(int i = 0; i < n; i++)
    #define pb push_back
    #define N 1000000007
     
    ll gcd(ll x,ll y){
        if(x==y)
        return x;
        ll big,small;
        if(x>y){
            big=x;
            small=y;
        }
        else{
            big=y;
            small=x;
        }
        if(big%small==0){
            return small;
        }
        else{
            return gcd(small,big%small);
        }
    }
     
    ll binexp(ll a, ll b){ // returns a^b
        if(b == 0)
            return 1;
        if(a == 1)
            return 1;
        ll res = binexp(a, b/2);
        if(b % 2 == 1)
            return ((1LL*res*res)%N*a)%N;
        else
            return (1LL*res*res)%N;
    }
    ll mod_inv(ll a, ll b){
        ll res = binexp(a, b-2);
        return res;
    }
     
    int isPrime(int n) {
        int i = 2;
        for (i = 2; i * i <= n; i++)
            if (n % i == 0)
                return 0;
        return 1;
    }
     
    bool sort_revert(pair<int, int> p1, pair<int, int> p2){
        if(p1.second<p2.second)
            return true;
        else
            return false;
    }
     
    ll factorial(ll n){
        if(n == 0)
            return 1;
        int64_t ans = 1;
        for (int64_t i = 1; i <= n; i++){
            ans = (ans*i)%N;
        }
        return ans;
    }
     
     
    void solve(){
        ll n, c;
        cin>>n>>c;
        ll a[n];
        fr(n)cin>>a[i];
        pair<ll, ll> p[n];
        p[0].first = a[0];
        p[0].second = 1;
        for(int i = 1; i < n; i++){
            p[i].first = a[i] - (i+1)*c;
            p[i].second = i+1;
        }
        sort(p+1, p+n);
        // fr(n)cout<<p[i].first<<" "<<p[i].second<<endl;
        for(int i = n-1; i >= 1; i--){
            if((a[0] + p[i].first) >= 0){
                a[0] += p[i].first + p[i].second*c;
                // cout<<a[0]<<endl;
            }
            else{
                cout<<"No\n";
                return;
            }
        }
        cout<<"Yes\n";
     
    }
     
    int main() {
        fastio();
        int t = 1;
        cin >> t;
        while (t--) {
            solve();
        }
    }