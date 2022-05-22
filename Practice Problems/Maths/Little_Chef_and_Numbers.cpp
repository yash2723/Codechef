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
    vll v(n);
    for(int i = 0 ; i < n ; i++)
        cin >> v[i];
    ll total_pair = ((n-1)*n/2);
    ll rem = 0 , cnt_2 = 0;
    for(int i = n-1 ; i >= 0 ; i--)
    {
        if(v[i] == 1)
            rem += (i);
        else if(v[i] == 2)
            cnt_2++;
    }
    if(cnt_2)
        answer(total_pair-rem-cnt_2-1);
    else
        answer(total_pair-rem);
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