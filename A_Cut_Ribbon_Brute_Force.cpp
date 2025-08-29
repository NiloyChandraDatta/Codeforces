// Recursion with Memoization

#include <bits/stdc++.h>

using namespace std;

int rec(int len, int a, int b, int c, vector<int>& dp)
{
    if (len == 0)
    {
        return 0;
    }
    if (len < 0)
    {
        return -1e9;
    }

    if (dp[len] != -1)
    {
        return dp[len];
    }

    int p1 = 1 + rec(len - a, a, b, c, dp);
    int p2 = 1 + rec(len - b, a, b, c, dp);
    int p3 = 1 + rec(len - c, a, b, c, dp);

    return dp[len] = max({p1, p2, p3});
}

void solve()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> dp(n + 1, -1);

    int ans = rec(n, a, b, c, dp);

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