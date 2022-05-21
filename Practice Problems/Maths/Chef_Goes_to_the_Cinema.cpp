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
    ll x;
    cin >> x;
    vll v(100000);
    v[1] = 1;
    for(int i = 2 ; i < 100000 ; i++)
        v[i] = v[i-1] + i;
    ll cnt = 1 , d1 = 0 , d2 = 0;
    for(int i = 1 ; i < 100000 ; i++)
    {
        if(v[i] == x)
            break;
        else if(v[i] < x)
            cnt++;
        else
        {
            d1 = cnt + (v[i]-x);
            d2 = (--cnt) + (x-v[i-1]);
            break;
        }
    }
    if(d1 == 0)
        answer(cnt);
    else
        answer(min(d1,d2));
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