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
    ll n;
    cin >> n;
    vll h(n);
    multiset<int> s;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> h[i];
        s.insert(h[i]);
    }
    ll cnt = 0;
    for(auto it : h)
        if(s.count(it) == 1)
            cnt++;
    if(cnt == 1 && s.count(h[n-1]) == 1)
    {
        for(auto it : h)
            if(s.count(it) > 2)
            {
                answer(1);
                return;
            }
        answer(2);
    }
    else if(cnt % 2 == 0)
        answer(cnt/2);
    else
        answer((cnt/2)+1);
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