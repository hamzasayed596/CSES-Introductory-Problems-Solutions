/*****************************************************************************************
* ﷽ *
   ﴾ رَبِّ اشْرَحْ لِي صَدْرِي * وَيَسِّرْ لِي أَمْرِي * وَاحْلُلْ عُقْدَةً مِّن لِّسَانِي * يَفْقَهُوا قَوْلِي ﴿

  ██   ██  █████  ███    ███ ███████  █████      ███████  █████  ██    ██ ███████ ██████
  ██   ██ ██   ██ ████  ████    ███  ██   ██     ██      ██   ██  ██  ██  ██      ██   ██
  ███████ ███████ ██ ████ ██   ███   ███████     ███████ ███████   ████   █████   ██   ██
  ██   ██ ██   ██ ██  ██  ██  ███    ██   ██          ██ ██   ██    ██    ██      ██   ██
  ██   ██ ██   ██ ██      ██ ███████ ██   ██     ███████ ██   ██    ██    ███████ ██████
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define NeedForSpeed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
typedef long double ld; typedef long long ll; typedef unsigned long long ull;
typedef __int128_t i128; typedef unsigned __int128 u128;
const ll dy[] = {0, 0, -1, 1}; const ll dx[] = {-1, 1, 0, 0};
const ll MOD = 1e9+7; const ll INF = 1e9; const ll LINF = 1e18; const ll MAX = 1e6;

ull nCr(ll n, ll r) {
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

void solve() {
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cout << ((i * i) * (i * i - 1)) / 2 - 4 * ((i - 2) * (i - 1)) << endl;
    }
}

signed main() {
    NeedForSpeed;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}