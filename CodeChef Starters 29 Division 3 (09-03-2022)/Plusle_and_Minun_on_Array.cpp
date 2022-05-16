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
    ll n, s = 0;
    cin >> n;
    vll arr(n), a, b;
    for(auto &X: arr) 
        cin >> X;
    for(int i = 0; i < n; i++){
      if(i & 1) 
        a.push_back(abs(arr[i]));
      else 
        b.push_back(abs(arr[i]));
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a[a.size() - 1] > b[0])
        swap(a[a.size() - 1], b[0]);
    for(auto x: b) 
        s += x;
    for(auto x: a) 
        s -= x;
    answer(s);
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