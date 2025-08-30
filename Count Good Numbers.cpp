// https://codeforces.com/contest/2125/problem/C
#include <bits/stdc++.h>

using namespace std;

long long calc(long long n)
{
    if (n == 0)
    {
        return 0;
    }
    long long cnt = n;
    cnt -= n / 2;
    cnt -= n / 3;
    cnt -= n / 5;
    cnt -= n / 7;
    cnt += n / 6;
    cnt += n / 10;
    cnt += n / 14;
    cnt += n / 15;
    cnt += n / 21;
    cnt += n / 35;
    cnt -= n / 30;
    cnt -= n / 42;
    cnt -= n / 70;
    cnt -= n / 105;
    cnt += n / 210;
    return cnt;
}

void solve()
{
    long long l, r;
    cin >> l >> r;
    cout << calc(r) - calc(l - 1) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
