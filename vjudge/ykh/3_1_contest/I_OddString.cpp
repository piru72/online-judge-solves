#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    str.insert(str.begin(), '#');

    rep(1, str.size()) i & 1 ? cout << str[i] : cout << "";
    cout << endl;
    return 0;
}