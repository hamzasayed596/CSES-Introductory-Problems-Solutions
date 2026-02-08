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
typedef long double ld;
typedef long long ll; typedef unsigned long long ull;
typedef __int128_t i128; typedef unsigned __int128 u128;
const int dy[] = {0, 0, -1, 1}; const int dx[] = {-1, 1, 0, 0};
const ll MOD = 1e9+7; const int INF = 1e6+10; const ll LINF = 1e18;const ll MAX = 1e6;

void solve() {
    ll n;
    cin >> n;
    while (n != 1) {
        if(n % 2 == 0) {
            cout << n << " ";
            n /= 2;
        }
        else {
            cout << n << " ";
            n *= 3;
            n++;
        }
    }
    cout << n << endl;
}

signed main() {
    NeedForSpeed;
    ll t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
