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

string board[8];
bool col[8], diag1[15], diag2[15];
ll ans = 0;

void solve() {
    ll k, l = 1, c = 9, st = 1;
    cin >> k;
    while (k > l * c) {
        k -= l * c;
        l++;
        c *= 10;
        st *= 10;
    }
    ll n = st + (k - 1) / l;
    string s = to_string(n);
    cout << s[(k - 1) % l] << endl;
}

signed main() {
    NeedForSpeed;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}