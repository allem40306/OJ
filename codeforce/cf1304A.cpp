#pragma GCC optimize(2)
#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;
using PLL = pair<LL, LL>;
const int INF = 1e9;
const int MXN = 0;
const int MXV = 0;
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define FOR(i, L, R) for (int i = L; i != (int)R; ++i)
#define FORD(i, L, R) for (int i = L; i != (int)R; --i)
#define IOS                                                                    \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);                                                         \
    ios_base::sync_with_stdio(false);

int main()
{
    IOS;
    int t;
    LL x, y, a, b;
    cin >> t;
    FOR(ti, 0, t)
    {
        cin >> x >> y >> a >> b;
        if (abs(x - y) % (a + b) == 0)
        {
            cout << abs(x - y) / (a + b) << '\n';
        }
        else
        {
            cout << "-1\n";
        }
    }
}
