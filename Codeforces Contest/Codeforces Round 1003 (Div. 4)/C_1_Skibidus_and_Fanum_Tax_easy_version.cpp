#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), c(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int b;
        cin >> b;

        if (n > 1) {
            if (a[0] >= a[1]) {
                a[0] = b - a[0];
            }
        }

        for (int i = 1; i < n - 1; i++) {
            if (a[i] <= a[i + 1] && a[i] >= a[i - 1]) {
                continue;
            } else {
                a[i] = b - a[i];
            }
        }

        c = a;
        sort(a.begin(), a.end());

        if (c == a || n == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}