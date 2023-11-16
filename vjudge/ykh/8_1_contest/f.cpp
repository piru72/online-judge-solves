#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<ll> v;
int N, K;

bool ok(ll mid)
{
    ll cnt = 0;

    for (int i = 0; i < N; i++) {

        ll canBlow = (mid / v[i]);

        cnt += canBlow;

        if (cnt >= K)
            return true;
    }

    return cnt >= K;
}
ll binarySearch()
{
    ll l = 1, r = 1e18 + 5, ans = 0;

    while (l <= r) {
        ll mid = (l + r) / 2;

        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        }

        else {
            l = mid + 1;
        }
    }

    return ans;
}
void solve()
{
    cin >> N >> K;
    v.resize(N);

    for (int i = 0; i < N; i++)
        cin >> v[i];

    cout << binarySearch() << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}