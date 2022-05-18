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
    vll ans;
    ans.pb(1);
    ans.pb(1);
    if(n > 2)
    {
        for(int i = 2 ; i < n ; i++)
            ans.pb(i);
    }
    if(ans.size() < n+1)
    {
        ll sum = 0;
        for(auto it : ans)
            sum += it;
        ans.pb((pow(2,n))-sum);
        sort(ans.begin() , ans.end());
    }    
    for(auto it : ans)
        cout << it << " ";
    cout << endl;
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