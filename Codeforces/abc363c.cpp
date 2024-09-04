#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

bool isPalindrome(const string &s, int k) {
    for (int i = 0; i < k / 2; ++i)
        if (s[i] != s[k - 1 - i])
            return false;
    return true;
}

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;
    return result;
}

int countPermutationsWithoutPalindromes(string s, int k) {
    int n = s.length();
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }

    int dp[n + 1][1 << k];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;

    for (int i = 0; i < n; ++i) {
        for (int mask = 0; mask < (1 << k); ++mask) {
            if (dp[i][mask] == 0)
                continue;
            for (int j = 0; j < 26; ++j) {
                if (freq[j] == 0)
                    continue;
                freq[j]--;
                int newMask = ((mask << 1) & ((1 << k) - 1)) | 1;
                string recentChars = "";
                for (int x = 0; x < k && (newMask >> x) & 1; ++x) {
                    recentChars = char('a' + j) + recentChars;
                }
                if (recentChars.size() < k || !isPalindrome(recentChars, k))
                    dp[i + 1][newMask] += dp[i][mask];
                freq[j]++;
            }
        }
    }

    int totalPermutations = factorial(n);
    for (int i = 0; i < 26; ++i) {
        if (freq[i] > 0) {
            totalPermutations /= factorial(freq[i]);
        }
    }

    int validPermutations = 0;
    for (int mask = 0; mask < (1 << k); ++mask) {
        validPermutations += dp[n][mask];
    }

    return validPermutations;
}

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;

    int result = countPermutationsWithoutPalindromes(s, k);
    cout << result << endl;
}

int main() {
    fastio();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}

