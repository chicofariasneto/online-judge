#include "bits/stdc++.h"
using namespace std;

////////////// Prewritten code follows. Look down for solution. ////////////////
#define x first
#define y second
#define len(x) ((int)(x).size())
using pii = pair<int, int>;
using ll = long long;
using llu = long long unsigned;
using ld = long double;

// large numbers
const ll MAXN = 1e18+1;

// For graphs
map < ll, vector < ll > > adj;
map < ll, bool > visited;
vector < ll > nodes;

const ld EPS = 1e-9;
inline int cmp(ld x, ld y = 0, ld tol = EPS) {
	return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}

const int MOD = 1;
inline int mod (ll x, int m = MOD) {
	return (int)(((x%m) + m)%m);
}

ll n;

void solve() {
    scanf("%lld", &n);

    for (ll i = 0; i < n; i++)
        scanf("%lld", &nodes[i]);
    
    sort(nodes.begin(), nodes.end());
    
    bool aux = false;
    for (ll i = 0; i < n; i++) {
        for (ll j = 1; j < n-i; j++) {
            if (nodes[0] == nodes[j] + j) aux = true;
            else aux = false;
        }
        if (aux) {
            printf("%lld\n", i+1);
            for (ll j = 0; j < n-i; j++) {
                if (j == 0) printf("%lld", nodes[j]);
                else printf(" %lld", nodes[j]);
            }
            putchar('\n');
        }
    }
}

////////////////////////// Solution starts below. //////////////////////////////
int main () {
	solve();
	return 0;
}