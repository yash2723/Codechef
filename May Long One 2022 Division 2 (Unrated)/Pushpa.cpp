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
    vll h(n);
    for(int i = 0 ; i < n ; i++)
        cin >> h[i];
    sort(h.begin() , h.end());
    vll ans;
    ans.push_back(h[h.size()-1]);
    multiset<int> multi_s;
    set<int> s;
    for(auto it : h)
    {
        multi_s.insert(it);
        s.insert(it);
    }
    for(auto it : s)
    {
        ll res = it+(multi_s.count(it)-1);
        ans.push_back(res);
    }
    sort(ans.begin() , ans.end());
    answer(ans[ans.size()-1]);
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