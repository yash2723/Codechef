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
    ll n , x;
    cin >> n >> x;
    ll a , b , c , f = 0;
    if(x >= 0 && x <= (3*n))
    {
        if(x % 3 == 0)
        {
            a = (x/3);
            b = 0;
            c = n - a;
            f = 1;
        }
        ll rem = x % 3;
        ll start = (x+3-rem) - (n - ((x+3-rem) / 3));
        if(x >= start && x <= (x+3-rem))
        {   
            a = (x+3-rem) / 3;
            b = (x+3-rem) - x;
            c = n - a - b;
            f = 1;
        }
    }
    if(f == 0)
        ansno;
    else
    {
        ansyes;
        cout << a << " " << b << " " << c << endl;
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