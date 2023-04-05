#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

int n, a[N], b[N];

int main() {

    cin >> n;

    for (int i = 1; i <= n; ++i) cin >> a[i], b[i] = a[i];

    sort(b + 1, b + n + 1);

    int mid = 1 + n + 1 >> 1;

    int l = lower_bound(b + 1, b + n + 1, b[mid]) - b;

    int r = upper_bound(b + 1, b + n + 1, b[mid]) - b - 1;

    bool f = l - 1 > n - r ? true : false;

    for (int i = 1; i <= n; ++i) {

        if (a[i] == b[mid]) {

            if (l - 1 >= n - r) cout << 0 << " " ;

            else cout << 1 << " " ;

        }

        else if (f) cout << max(0, b[mid] - a[i]) << " " ;

        else cout << max(0, b[mid] - a[i] + 1) << " " ;

    }

    return 0;

}
