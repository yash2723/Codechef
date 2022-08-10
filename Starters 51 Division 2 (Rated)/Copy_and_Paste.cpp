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
    ll n , m;
    cin >> n >> m;
    string s;
    cin >> s;
    string str = s;
    for(int i = 0 ; i < m-1 ; i++)
        str += s; 
    s = str;
    vll pre(n*m) , suff(n*m);
    ll cnt = 0;
    for(int i = 0 ; i < n*m ; i++) {
        if(s[i] == '1')
            pre[i] = ++cnt;
        else
            pre[i] = cnt;
    }
    cnt = 0;
    for(int i = n*m-1 ; i >= 0 ; i--) {
        if(s[i] == '1')
            suff[i] = ++cnt;
        else
            suff[i] = cnt;
    }
    cnt = 0;
    for(int i = 0 ; i < n*m-1 ; i++)
        if(pre[i] == suff[i+1])
            cnt++;
    if(pre[n*m-1] == 0)
        cnt++;
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