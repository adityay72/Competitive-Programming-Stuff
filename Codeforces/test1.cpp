#ifndef LOCAL
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
//    #pragma GCC target("sse4.2,bmi,bmi2,popcnt,lzcnt")
#endif
#ifdef DEBUG
    #include "include/debug.hpp"
#else
    #define debug(...) 0
#endif

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    int a;
    cin >> a;
    cout << a <<endl;
}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
    cout << "__________________________" << endl;
     }
    cerr << endl << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
} 

