#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

bool isSubsetSum(int a[], int n , int sum){
	bool t[n+1][sum+1];

	for(int i =0;i<sum+1;i++){
		t[0][i] = false;
	}
	for(int i = 0;i<n+1;i++){
		t[i][0] = true;
	}

	for(int i =1;i<n+1;i++){
		for(int j=1;j<sum+1;j++){
			if(a[i-1] <= sum){
				t[i][j] = t[i-1][j-a[i-1]] || t[i-1][j];
			}
			else {
				t[i][j] = t[i-1][j]; 
			}
		}
	}
	return t[n][sum];
}

int main() {
	int set[] = { 2, 3, 7, 8, 10 };
    int sum = 11;
    int n = sizeof(set) / sizeof(set[0]);
    if (isSubsetSum(set, n, sum) == true)
        cout << "Found a subset with given sum" << endl;
    else
        cout << "No subset with given sum" << endl;
    return 0;
} 

