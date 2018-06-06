#include <bits/stdc++.h>
using namespace std;



int cnt[1000005];
int A[100005];
int dp[100001][100];
int tot;
int idx[1005];
void pre()
{
    for ( int i = 1; i <= 1000005; i++ ) {
        for ( int j = i; j <= 1000005; j += i ) cnt[j]++;
    }
    return;
}
int main()
{
    pre();
    int n,q,x,y;
    long long ans;
    tot = 1;
    cin >> n;
    for ( int i = 1; i <= n; i++ ) {
        cin >> A[i];
        A[i] = cnt[A[i]];
        if ( !idx[A[i]] ) idx[A[i]] = tot++;
        A[i] = idx[A[i]];
    }
    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j < tot; j++ ) dp[i][j] = dp[i-1][j];
        dp[i][A[i]]++;
    }
    cin >> q;
    while ( q-- ) {
        cin >> x >> y;
        ans = 0;
        for ( int i = 1; i < tot; i++ ) {
            long long val = dp[y][i] - dp[x-1][i];
            val = (val*(val-1LL))/2;
            ans += val;
        }
        cout << ans << endl;
    }
    return 0;
}
