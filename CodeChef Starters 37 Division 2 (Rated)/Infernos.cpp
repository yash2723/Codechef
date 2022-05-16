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
    vll h(n);
    for(int i = 0 ; i < n ; i++)
        cin >> h[i];
    ll single_mode = 0 , multi_mode = 0;
    ll max = h[0];
    for(int i = 1 ; i < n ; i++)
    {
        if(max < h[i])
            max = h[i];
    }
    multi_mode = max;
    vll diff(n);
    for(int i = 0 ; i < n ; i++)
    {
        if(h[i] % x == 0)
            diff.push_back(h[i]/x);
        else
            diff.push_back((h[i]/x)+1);
    }
    ll sum = 0;
    for(auto it : diff)
        sum += it;
    single_mode = sum;
    if(single_mode < multi_mode)
        answer(single_mode);
    else
        answer(multi_mode);
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