#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
using PII = pair<int, int>;
using PLL = pair<LL, LL>;
using VI = vector<int>;
using VVI = vector<vector<int>>;
const int INF = 1e9;
const int MXN = 0;
const int MXV = 0;
const double EPS = 1e-9;
const int MOD = 1e9 + 7;
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define FOR(i, L, R) for (int i = L; i < (int)R; ++i)
#define FORD(i, L, R) for (int i = L; i > (int)R; --i)
#define IOS                                                                    \
    cin.tie(nullptr);                                                          \
    cout.tie(nullptr);                                                         \
    ios_base::sync_with_stdio(false);

int main()
{
    IOS;
    int t;
    LL n;
    vector<LL> v;
    cin >> t;
    while (t--)
    {
        cin >> n;
        v.resize(n + 5);
        FOR(i, 1, n + 1) { cin >> v[i]; }
        sort(v.begin() + 1, v.begin() + n + 1);
        LL sum = 0;
        bool ok = true;
        FOR(i, 1, n + 1)
        {
            sum += v[i];
            if (sum < (i) * (i - 1) / 2)
            {
                ok = false;
                break;
            }
        }
        if (!ok || (sum != n * (n - 1) / 2))
        {
            cout << "The data have been tampered with!\n";
        }
        else
        {
            cout << "It seems to have no problem.\n";
        }
    }
}
