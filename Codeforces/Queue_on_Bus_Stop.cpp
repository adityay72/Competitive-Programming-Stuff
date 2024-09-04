#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
    
        int n,m;
    int ans = 0;
    cin >> n >> m;
    int remain = m;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if(remain >= x)
        {
            remain -= x;
        }
        else
        {
            remain = m;
            remain -= x;
            ans ++;
        }
    }
    cout << ans+1 << endl;
    return 0;

}