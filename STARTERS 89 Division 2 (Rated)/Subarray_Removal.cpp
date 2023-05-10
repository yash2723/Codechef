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

    vll a(n), mp(n+1);
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
        mp[a[i]] = i;
    }

    if(a[0] == 1 || a[n-1] == 1) answer(n-1);
    else {
        ll cnt = 1;
        if(abs(mp[n] - mp[n-1]) == 1) {
            cnt++;
            ll left = min(mp[n], mp[n-1]), right = max(mp[n], mp[n-1]);

            for(int i = n-2 ; i > 0 ; i--) {
                if(abs(mp[i] - left) == 1) {
                    left = min(mp[i], left);
                    cnt++;
                }
                else if(abs(mp[i] - right) == 1) {
                    right = max(mp[i], right);
                    cnt++;
                }
                else 
                    break;
            }
        }
        answer(cnt);
    }
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