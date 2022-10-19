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
    string s;
    cin >> s;
    ll turn = 0;
    string t = "";
    ll first = 0, last = s.size() - 1;
    while(t.size() != s.size()) {
        if(turn % 2 == 0) {
            if(s[first] == '0')
                t = '0' + t;
            else
                t = t + '1';
            first++;
        }
        else {
            if(s[last] == '0')
                t = t + '0';
            else
                t = '1' + t;
            last--;
        }
        turn++;
    }
    answer(t);
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