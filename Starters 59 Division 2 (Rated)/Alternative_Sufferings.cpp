#include <bits/stdc++.h>
using namespace std;

#define PI  3.141592653589793

#define FAST ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define vi vector <ll>
#define vll vector < ll >
#define pb push_back
#define endl '\n'
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define answer(ans) cout << ans << '\n' 
#define ansyes cout << "YES\n" 
#define ansno cout << "NO\n" 
#define pii pair <ll,ll>

ll arr[100001];

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    k--;
    s = "." + s + ".";
    string temp = s;

    for(ll i = 1 ; i <= n ; i++) {
      if(s[i] == '1') {
        temp[i] = '0';
        if(s[i-1] == '0')
            temp[i-1] = '1';
        if(s[i+1] == '0')
            temp[i+1] = '1';
      }
    }
    
    s = temp.substr(1,n);
    
    for(ll i = 0 , idx = 2147483647 ; i < n ; i++ , idx++) {
        if(s[i] == '1') 
            idx = 0;
        arr[i] = idx;
    }

    for(ll i = n , idx = 2147483647 ; i >= 0 ; i-- , idx++) {
        if(s[i] == '1') 
            idx=0;
        arr[i] = min(arr[i] , idx);
    }

    for(ll i = 0 ; i < n ; i++) {
        if(k < arr[i])
            cout << '0';
        else 
            cout << ((k - arr[i]) % 2 == 0 ? '1' : '0');
    }

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