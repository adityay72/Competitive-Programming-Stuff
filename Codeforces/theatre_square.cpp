#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
    ll n,m,a;
    cin >> n >> m >> a;
   
   cout << (n/a + (n%a != 0))*(m/a + (m%a != 0))<< endl;	

}	