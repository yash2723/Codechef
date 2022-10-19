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
    string a , b;
    cin >> a >> b;
    map<char , ll> mp1 , mp2;
    for(auto it : a)
        mp1[it]++;
    for(auto it : b)
        mp2[it]++;
    
    ll mini = 0;
    for(int i = 0 ; i < 26 ; i++) {
        if(mp1['a'+i] && mp2['a'+i])
            mini = max(mini , min(mp1[(char)('a'+i)] , mp2[(char)('a'+i)]));
    }
    // if(mini == INT_MAX)
    //     answer(0);
    // else
    answer(mini);
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