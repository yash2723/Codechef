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

void recur(ll sumB , ll sumR , vll r , vll b , ll i , ll &ans , vector<vector<ll>> &dp) {
    if(i == b.size()) {
        ans = max(ans , min(sumB , sumR));
        return;
    }

    if(dp[i][sumB] >= sumR && dp[i][sumB] != 0) 
        return;
    
    dp[i][sumB] = sumR;

    recur(sumB+b[i] , sumR , r , b , i+1 , ans , dp);

    recur(sumB , sumR+r[i] , r , b , i+1 , ans , dp);
}

void solve()
{
    ll n;
    cin >> n;
    vll r(n) , b(n);
    
    for(int i = 0 ; i < n ; i++) {
        cin >> r[i];
    }
    for(int i = 0 ; i < n ; i++) {
        cin >> b[i];
    }
    
    vector<vector<ll>> dp(n , vector<ll> (20000));
    ll ans = 0;
    recur( 0 , 0 , r , b , 0 , ans , dp);
    answer(ans);
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