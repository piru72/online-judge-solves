#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() {

    int n ;
    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i] = abs(a[i]);
    }

    int sum = 0;

    for(int i=0;i<n;i++){
        sum+=a[i];
    }

    cout << sum << endl;

 }
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}