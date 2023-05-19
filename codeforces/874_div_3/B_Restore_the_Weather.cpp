#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};
#define BIG_MOD 1000000007
#define vi vector<int>
#define vll vector<ll>

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector < pair <ll , ll> > v1;
    vll v2;

    for (int i = 1; i <= n; i++)
    {
        int temp; 
        cin >> temp;
        v1.push_back({temp , i});
    }

    Sort(v1);

     for (int i = 1; i <= n; i++)
    {
        int temp; 
        cin >> temp;
        v2.push_back(temp);
    }
    Sort(v2);
    vll v3(n);
    for (int i = 0; i < n; i++)
    {
        v3[v1[i].second - 1] = v2[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;
    
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}