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
    vll v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin() , v.end());
    ll maxi = v[2] , a = v[0] , b = v[1];
    while(maxi)
    {
        if(((a & 1) && (b & 1)) || ((a & 1) && (maxi & 1)) || ((maxi & 1) && (b & 1)));
        
        else
        {
            ansno;
            return;
        }
        a = a >> 1;
        b = b >> 1;
        maxi = maxi >> 1;
    }
    ansyes;
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