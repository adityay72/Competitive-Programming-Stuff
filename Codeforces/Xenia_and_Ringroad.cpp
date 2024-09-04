#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007



int main()
    {
        long long int n,m,sum,i;
        cin >> n >> m ;
        int a[100005];
        for(i=0; i<m; i++)
        {
            cin >> a[i];
        }
        sum=a[0]-1;
        for(i=0; i<m-1; i++)
        {
            if(a[i]>a[i+1])
            {
                sum+=a[i+1]+n-a[i];
            }
            else
                sum+=a[i+1]-a[i];
        }
        cout << sum;
        return 0;
    }