#include <bits/stdc++.h>

#define int long long
#define ll long long
#define ull unsigned long long
#define str string
#define ii pair<int, int>
#define fi first
#define se second
#define el '\n'

#define TASK "CAMBAY"

#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define FORD(i, a, b) for (int i = (a); i >= (b); --i)
#define REP(i, n) for (int i = 1; i <= (n); ++i)

#define BIT(mask, i)      (mask & (1ll << i))
#define ON_BIT(mask, i)   (mask | (1ll << i))
#define OFF_BIT(mask, i)  (mask & ~(1ll << i))
#define C_BIT(mask)       __builtin_popcountll(mask)

const int maxn   = 1e6+100;
const int inf    = (int) 1e18;
const int MOD    = 1e9+7;
const int base   = 131;

using namespace std;

int n, m;

void MySolution(){

    cin >> n >> m;
    int a[n + 1][m + 1];
    int maxx = -inf, minn = inf;
    FOR (i, 1, n)
        FOR (j, 1, m) {
            cin >> a[i][j];
            maxx = max(maxx, a[i][j]);
            minn = min(minn, a[i][j]);
        }

    bool row[maxn];
    bool col[maxn];

    FOR (i, 1, n) row[i] = 0;
    FOR (j, 1, m) col[j] = 0;

    FOR (i, 1, n)
        FOR (j, 1, m)
            if (a[i][j] == maxx || a[i][j] == minn) row[i] = 1, col[j] = 1;

    int result = 0;
    FOR (i, 1, n)
        FOR (j, 1, m)
            if (!row[i] && !col[j]) result++;

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