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

vector <bool> is_prime;
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i < MAX; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j < MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

void solve() {
    ll n, t = 0, ans = LLONG_MAX;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        t += arr[i];
    }
    for (ll mask = 0; mask < (1 << n); mask++) {
        ll s = 0;
        for (ll i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                s += arr[i];
            }
        }
        ans = min(ans, llabs(t - 2 * s));
    }
    cout << ans << endl;
}

signed main() {
    NeedForSpeed;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}