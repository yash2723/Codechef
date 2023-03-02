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
    ll x , y;
    cin >> x >> y;

    if(y <= x) {
        answer(0);
        return ;
    }

    ll cnt = 0;

    if(x == 3 || x == 9) 
        x += 3 , cnt++;
    else if(x == 5)
        x += 5 , cnt++;
    else if(x == 7)
        x += 7 , cnt++;

    if(y <= x) {
        answer(cnt);
        return ;
    }

    ll diff = y-x;
    if(diff & 1)
        cnt++;
    cnt += (diff/2);

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