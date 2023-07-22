#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    ll n, sum = 0; cin >> n;
    ll spell[n];
    for (int i = 0; i < n; i++){
        ll x; cin >> x;
        sum += x;
    }
    for (int i = 0; i < n; i++) cin >> spell[i];
    sort(spell, spell + n);
    for (int i = 0; i < n - 1; i++){
        sum += spell[i];
    }
    cout << sum << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
       freopen("INP.txt","r",stdin);
       freopen("OUT.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}