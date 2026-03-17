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

string s;
bool vis[7][7];
ll ans = 0;

bool in(ll r,ll c) {
    return r >= 0 && r < 7 && c >= 0 && c < 7;
}

bool split(ll r,ll c) {
    bool U = in(r-1, c) && !vis[r-1][c];
    bool D = in(r+1, c) && !vis[r+1][c];
    bool L = in(r, c-1) && !vis[r][c-1];
    bool R = in(r, c+1) && !vis[r][c+1];
    if (U && D && !L && !R) return true;
    if (L && R && !U && !D) return true;
    return false;
}

void dfs(ll r,ll c,ll i) {
    if(r == 6 && c == 0) {
        if(i == 48) ans++;
        return;
    }
    if(i == 48) return;
    if(split(r, c)) return;
    vis[r][c] = true;
    if(s[i] == 'U') {
        if(in(r-1,c) && !vis[r-1][c])
            dfs(r-1,c,i+1);
    }
    else if(s[i] == 'D') {
        if(in(r+1, c) && !vis[r+1][c])
            dfs(r+1, c, i+1);
    }
    else if(s[i]=='L') {
        if(in(r, c-1) && !vis[r][c-1])
            dfs(r, c-1, i+1);
    }
    else if(s[i] == 'R') {
        if(in(r, c+1) && !vis[r][c+1])
            dfs(r, c+1, i+1);
    }
    else {
        if(in(r-1, c) && !vis[r-1][c])
            dfs(r-1, c, i+1);
        if(in(r+1, c) && !vis[r+1][c])
            dfs(r+1, c, i+1);
        if(in(r, c-1) && !vis[r][c-1])
            dfs(r, c-1, i+1);
        if(in(r, c+1) && !vis[r][c+1])
            dfs(r, c+1, i+1);
    }
    vis[r][c] = false;
}

void solve() {
    cin >> s;
    dfs(0,0,0);
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