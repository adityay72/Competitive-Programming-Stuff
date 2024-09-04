#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

vector<ll> generatePalindromes(int digits) {
    vector<ll> palindromes;

       for (int len = 1; len <= digits; len++) {
        int halfLen = (len + 1) / 2;
        int start = pow(10, halfLen - 1);
        int end = pow(10, halfLen);

        for (int i = start; i < end; i++) {
            string half = to_string(i);
            string full = half;
            reverse(half.begin(), half.end());
            if (len % 2 == 1) {
                full += half.substr(1);
            } else {
                full += half;
            }
            palindromes.push_back(stoll(full));
        }
    }
    return palindromes;
}

void solve() {
    ll n; 
    cin >> n;

    int digits = 1;
    vector<ll> palindromes;

    while (palindromes.size() < n) {
        vector<ll> newPalindromes = generatePalindromes(digits);
        palindromes.insert(palindromes.end(), newPalindromes.begin(), newPalindromes.end());
        digits++;
    }

    sort(palindromes.begin(), palindromes.end());

    cout << palindromes[n - 1] << endl;
}

int main() {
    fastio();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}

