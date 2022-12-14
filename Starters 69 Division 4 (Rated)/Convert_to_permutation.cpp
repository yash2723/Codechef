#include <bits/stdc++.h>
using namespace std;

#define PI  3.141592653589793

#define FAST ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define vi vector <int>
#define vll vector < ll >
#define pb push_back
#define endl '\n'
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define answer(ans) cout << ans << '\n' 
#define ansyes cout << "YES\n" 
#define ansno cout << "NO\n" 
#define pii pair <int,int>


void solve()
{
    ll n;
    cin >> n;
    vll a(n);
    map<ll , ll> mp;
    map<ll , bool> avail;
    ll f = 0;
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
        if(a[i] > n)
            f = 1;
        avail[a[i]] = true;
        mp[a[i]]++;
    }
    if(f == 1) {
        answer(-1);
        return;
    }

    ll cnt = 0;
    for(int i = 1 ; i <= n ; i++) {
        if(!avail[i]) {
            f = 0;
            for(int j = 0 ; j < i ; j++) {
                if((j == 0) && (mp[0] > 0)) {
                    cnt += (i-0);
                    f = 1;
                    mp[0]--;
                    break;
                }
                if((j > 0) && (mp[j] > 1)) {
                    cnt += (i-j);
                    f = 1;
                    mp[j]--;
                    break;
                }
            }
            if(f == 0) {
                answer(-1);
                return;
            }
        }
    }

    answer(cnt);
}


int main()
{
    FAST;

    ll t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;

    return 0;
}