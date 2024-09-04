#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h0, a, c, q;
    cin >> n >> h0 >> a >> c >> q;

    deque<int> dq;
    dq.push_back(h0);

    for (int i = 1; i < n; i++) {
        int hi = (1LL * a * dq.back() + c) % q;
        while (!dq.empty() && dq.back() <= hi) {
            dq.pop_back();
        }
        dq.push_back(hi);
    }

    cout << dq.size() << "\n";

    return 0;
}
