#include <bits/stdc++.h>

#define int long long
#define ll long long
#define ull unsigned long long
#define str string
#define ii pair<int, int>
#define fi first
#define se second
#define el '\n'

#define TASK "XAUCON"

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

str s;
int prf[maxn];

bool vowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void MySolution(){

    cin >> s;
    FOR (i, 0, s.size() - 1) prf[i] = prf[i - 1] + (vowel(s[i]));

    int result = 0;
    FOR (i, 0, s.size() - 1) {
        if (!vowel(s[i])) {
            int path1 = prf[i];
            int path2 = prf[s.size() - 1] - prf[i];
            result += path1 + path2;
        }
    }

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