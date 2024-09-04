#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    unordered_map<string, int> valueToSequence;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++) {
            string s;
            cin >> s;
            valueToSequence[s] = i + 1;
        }
    }

    int t;
    cin >> t;
    while (t--) {
        string oldPassword, newPassword;
        cin >> oldPassword >> newPassword;

        int oldSeq = valueToSequence[oldPassword];
        int newSeq = valueToSequence[newPassword];

        if (oldSeq == 0 || newSeq == 0 || oldSeq != newSeq) {
            cout << "OK" << endl;
        } else {
            if (oldPassword.find(newPassword) == 0 || newPassword.find(oldPassword) == 0) {
                cout << "REJECT" << endl;
            } else {
                cout << "OK" << endl;
            }
        }
    }

    return 0;
}
