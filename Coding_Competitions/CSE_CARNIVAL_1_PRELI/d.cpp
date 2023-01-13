#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define rrep1(i, n) for (int i = (n); i > 0; i--)
#define all_bit(x) __builtin_popcount(x)
#define CLEAR(a, x) memset(a, x, sizeof(a));
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    reverse(all(s));
    ll pos = 0;
    ll cnt = 0;
    rep(i, n)
    {
        if (s[i] == '0')
        {
            cnt++;
        }
        else if (s[i] == '5')
        {
            pos = i;
            cnt++;
            break;
        }
        else
        {
            break;
        }
    }
    if (pos + 1 < n)
    {
        if (s[pos + 1] == '2' || s[pos + 1] == '7')
        {
            cnt++;
        }
    }
    reverse(all(s));
    set<char> st;
    rep(i, n)
    {
        st.insert(s[i]);
    }
    if (st.size() == 2 && st.count('5') && st.count('0'))
    {
        cout << cnt + 1 << endl;
        return;
    }
    else
    {
        if (cnt)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}

int main()
{
    FAST;
    int tt;
    // tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}