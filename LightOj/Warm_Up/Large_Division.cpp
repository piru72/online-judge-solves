#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
#define Reverse(x) reverse(x.begin(), x.end())
void solve()
{

    string s;
    ll b;
    cin >> s >> b;

    b = abs(b);
    if (s[0] == '-')
        s.erase(s.begin());
    ll rem = 0;
    for (int i = 0; i < s.size(); i++)
        rem = stoll(to_string(rem) + s[i])% b;
    

    rem == 0 ? cout << "divisible" : cout << "not divisible";
    cout << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--)
    {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}