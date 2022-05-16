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
    string s;
    cin >> s;
    ll ans = 0 , sum = 0;
    for(int i = 1 ; i < s.size()-1 ; i++)
    {
        if(s[i] != s[0] && s[i] != s[s.size()-1])
            sum++;
        else
        {
            ans = max(ans , sum);
            sum = 0;
        }
    }   
    ans = max(ans , sum);
    if(ans == 0)
        answer(-1);
    else
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