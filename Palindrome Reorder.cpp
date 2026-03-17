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

void solve() {
    string s;
    cin >> s;
    ll n = s.length();
    bool odd = (n % 2) ? true : false;
    ll freq[26] = {0};
    for (ll i = 0; i < n; i++) {
        freq[ll(s[i]) - 65]++;
    }
    ll odds = 0;
    for (ll i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) {
            odds++;
        }
    }
    if (odds > 1 || (odds == 0 && odd == true) || (odds == 1 && odd == false)) {
        cout << "NO SOLUTION" << endl;
    }
    else {
        if (odd) {
            char x;
            for (ll i = 0; i < 26; i++) {
                if (freq[i] % 2) {
                    x = char(i + 65);
                }
            }
            for (ll j = 0; j < 26; j++) {
                if (freq[j] > 0) {
                    for (ll k = 0; k < freq[j] / 2; k++) {
                        cout << char(j + 65);
                    }
                }
            }
            cout << x;
            for (ll j = 25; j >= 0; j--) {
                if (freq[j] > 0) {
                    for (ll k = 0; k < freq[j] / 2; k++) {
                        cout << char(j + 65);
                    }
                }
            }
        }
        else {
            for (ll i = 0; i < 26; i++) {
                if (freq[i] > 0) {
                    for (ll k = 0; k < freq[i] / 2; k++) {
                        cout << char(i + 65);
                    }
                }
            }
            for (ll j = 25; j >= 0; j--) {
                if (freq[j] > 0) {
                    for (ll k = 0; k < freq[j] / 2; k++) {
                        cout << char(j + 65);
                    }
                }
            }
        }
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