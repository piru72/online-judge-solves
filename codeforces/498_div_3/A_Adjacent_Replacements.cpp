#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];

        v[i] += (v[i] & 1);
    }

    for (int i = 0; i < n; i++) {
        v[i] -= (v[i] % 2 == 0);
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}