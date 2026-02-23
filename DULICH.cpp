#include <bits/stdc++.h>

#define int long long
#define ll long long
#define ull unsigned long long
#define str string
#define ii pair<int, int>
#define fi first
#define se second
#define el '\n'

#define TASK "DULICH"

#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define FORD(i, a, b) for (int i = (a); i >= (b); --i)
#define REP(i, n) for (int i = 1; i <= (n); ++i)

#define BIT(mask, i)      (mask & (1ll << i))
#define ON_BIT(mask, i)   (mask | (1ll << i))
#define OFF_BIT(mask, i)  (mask & ~(1ll << i))
#define C_BIT(mask)       __builtin_popcountll(mask)

const int maxn   = 1e5+100;
const int inf    = (int) 1e18;
const int MOD    = 1e9+7;
const int base   = 131;

using namespace std;

int n;
int c[21][21];
int dp[1 << 20][20];

void MySolution(){

    cin >> n;
    FOR (i, 0, n - 1)
        FOR (j, 0, n - 1)
            cin >> c[i][j];

    int N = (1 << n);

    FOR(mask, 0, N -1)
        FOR(i, 0, n - 1)
            dp[mask][i] = inf;

    FOR (i, 0, n - 1) dp[1 << i][i] = 0;

    FOR (mask, 0, N - 1)
        FOR (u, 0, n - 1) {
            if (!BIT(mask, u)) continue;
            if (dp[mask][u] == inf) continue;
            FOR (v, 0, n - 1) {
                if (BIT(mask, v)) continue;
                int new_mask = mask | (1 << v);
                dp[new_mask][v] = min(dp[new_mask][v], dp[mask][u] + c[u][v]);
            }
        }

    int result = inf;
    int full = N - 1;
    FOR (i, 0, n - 1) result = min(result, dp[full][i]);

    cout << result;
        

}

signed main(){

    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }

    MySolution();

    return 0;

}
