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
    n *= 2;
    vll a(n);
    ll cnt_odd = 0 , cnt_even = 0 , cnt_square = 0;
    vll sq;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        if(a[i] % 2 == 0)
        {
            cnt_even++;
            if(((a[i])&(a[i]-1)) == 0)
            {
                // cout << a[i] << " ";
                cnt_square++;
                sq.pb(log2(a[i]));
            }
        }
        else
            cnt_odd++;

    }
    sort(sq.begin() , sq.end());
    if(cnt_odd >= cnt_even)
        answer(cnt_odd-(n/2));
    else
    {
        ll res = cnt_even - (n/2);
        // answer(cnt_square);
        if(res <= (cnt_even-cnt_square))
            answer(res);
        else
        {
            ll loop = res - (cnt_even-cnt_square);
            res = (cnt_even-cnt_square);
            for(int i = 0 ; i < loop ; i++)
                res += sq[i];   
            answer(res);
        }
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