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
    ll n , c;
    cin >> n >> c;
    string s;
    cin >> s;
    vll pos;
    for(int i = 0 ; i < n ; i++)
        if(s[i] == '1')
            pos.pb(i);
    bool f = true;
    ll index;
    for(int i = 0 ; i < pos.size()-1 ; i++)
        if((pos[i+1]-pos[i]-1) > c)
        {
            f = false;
            index = i+1;
            break;
        }
    if(f)
        ansyes;
    else
    {
        vll newPos;
        for(int i = index ; i < pos.size() ; i++)
            newPos.pb(pos[i]-pos[index]);
        ll size = newPos.size();
        for(int i = 0 ; i < index ; i++)
            newPos.pb(pos[i]+size);
        f = true;
        for(int i = 0 ; i < newPos.size()-1 ; i++)
            if((newPos[i+1]-newPos[i]-1) > c)
            {
                f = false;
                break;
            }
        if(f)
            ansyes;
        else
            ansno;
    }
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