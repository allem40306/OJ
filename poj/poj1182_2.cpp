#pragma GCC optimize(2)
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
typedef unsigned long long ULL;
const int INF = 1e9;
const int MXN = 1e5 + 5;
const int MXV = 5e4 + 5;
const ULL MOD = 10009;
const ULL seed = 31;
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define FOR(i, L, R) for (int i = L; i != (int)R; ++i)
#define FORD(i, L, R) for (int i = L; i != (int)R; --i)
#define IOS                                                                    \
    cin.tie(NULL);                                                             \
    cout.tie(NULL);                                                            \
    ios_base::sync_with_stdio(false);

int p[3 * MXV], sz[3 * MXV];
struct DisjointSet
{
    void init(int n)
    {
        for (int i = 0; i <= n; i++)
        {
            p[i] = i;
            sz[i] = 1;
        }
    }
    int find(int u) { return u == p[u] ? u : p[u] = find(p[u]); }
    void Union(int u, int v)
    {
        u = find(u);
        v = find(v);
        if (u == v)
        {
            return;
        }
        if (sz[u] < sz[v])
        {
            swap(u, v);
        }
        sz[u] += sz[v];
        p[v] = u;
    }
};

/*
Usage
DisjointSet djs; // declare
djs.init(int n); // initialize from vertex 0 to vertex n
djs.find(int u) // find the parent of vertex u
djs.Union(int u, int v) // union vertex u and v
*/

int main()
{
    DisjointSet djs;
    int n, k;
    scanf("%d%d", &n, &k);
    djs.init(3 * n);
    int ans = 0;
    FOR(i, 0, k)
    {
        int d, x, y;
        scanf("%d%d%d", &d, &x, &y);
        if (x > n || y > n)
        {
            ++ans;
        }
        else if (d == 1)
        {
            if (djs.find(x) == djs.find(n + y) || djs.find(x) == djs.find(n + n + y))
            {
                ++ans;
            }
            else
            {
                FOR(i, 0, 3) { djs.Union(n * i + x, n * i + y); }
            }
        }
        else
        {
            if (djs.find(x) == djs.find(y) || djs.find(x) == djs.find(n + n + y))
            {
                ++ans;
            }
            else
            {
                FOR(i, 0, 3) { djs.Union(n * i + x, n * ((i + 1) % 3) + y); }
            }
        }
    }
    printf("%d\n", ans);
}