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
const ll MAXN = 1e18 + 1;
const int MAXI = 1e8 + 1;

// For graphs
map<int, vector<int>> adj;
map<int, bool> visited;

vector< pair< int, pair <int, int > > > books;

const ld EPS = 1e-9;
inline int cmp(ld x, ld y = 0, ld tol = EPS)
{
	return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}

const int MOD = 1;
inline int mod(ll x, int m = MOD)
{
	return (int)(((x % m) + m) % m);
}

int oB, oA, cB, cA;
int t, n;
char aux;

void solve()
{
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);

        while (n--) {
            scanf("%c", &aux);
            getchar();

            if (aux == '(' && cB == 0) {
                oB += 1;
            }
            else if (aux == '(' && cB != 0) {
                oA += 1;
            }
            else if (aux == ')' && oB == 0) {
                cB = 1;
            }
            else if (aux == ')' && oB != 0) {
                cA = 1;
                oB--;
            }
        }

        printf("%d\n", oA + cA);
    }
}

////////////////////////// Solution starts below. //////////////////////////////
int main()
{
	solve();
	return 0;
}