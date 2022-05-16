#include <bits/stdc++.h>
using namespace std;

#define PI  3.141592653589793

#define FAST ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
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
    string s;
    cin >> s;
    ll cnt_1 = 0 , cnt_0 = 0;
    for(auto it : s)
    {
        if(it == '0')
            cnt_0++;
        else
            cnt_1++;
    }
    if(cnt_0 == 0 || cnt_1 == 0)
    {
        answer(1);
    }
    else
    {
        ll ans;
        if(cnt_0 == cnt_1)
            ans = (min(cnt_0 , cnt_1)*2);
        else
            ans = (min(cnt_0 , cnt_1)*2) + 1;

        answer(ans);
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