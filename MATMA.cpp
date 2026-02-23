#include <bits/stdc++.h>

#define int long long
#define ll long long
#define ull unsigned long long
#define str string
#define ii pair<int, int>
#define fi first
#define se second
#define el '\n'

#define TASK "MATMA"

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

int a, n;

int modPow(int base, int exp, int mod){

    int result = 1;
    while (exp > 0) {
        if (exp & 1) (result *= base) %= mod;
        (base *= base) %= mod;
        exp >>= 1;
    }

    return result;

}

void MySolution(){

    cin >> a >> n;

    cout << modPow(a, n, 10);

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