// https://codeforces.com/contest/189/problem/A
// Brute Force

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, a, b, c; cin >> n >> a >> b >> c;

    int ans = 0;

    for (int i = 0; i * a <= n; ++i)
    {
        for (int j = 0; i * a + j * b <= n; ++j)
        {
            int rem = n - (i * a + j * b);

            if (rem % c == 0)
            {
                int k = rem / c;
                ans = max(ans, i + j + k);
            }
        }
    }

    cout << ans << endl;
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1; // cin >> tc;
    while(tc--)
    {
        solve();
    }

    return 0;
}