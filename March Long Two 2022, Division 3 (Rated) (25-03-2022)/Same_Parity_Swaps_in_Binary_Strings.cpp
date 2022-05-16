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
    ll cnt_0_even = 0 , cnt_1_even = 0 , cnt_0_odd = 0 , cnt_1_odd = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if((i+1)%2)
        {
            if(s[i] == '0')
                cnt_0_odd++;
            else
                cnt_1_odd++;
        }
        else
        {
            if(s[i] == '0')
                cnt_0_even++;
            else
                cnt_1_even++;
        }
    }
    string ans = "";
    if(cnt_0_odd > 0)
    {
        ans += '0';
        cnt_0_odd--;
    }
    else
    {
        ans += '1';
        cnt_1_odd--;
    }
    for(int i = 1 ; i < n ; i++)
    {
        if((i+1)%2)
        {
            if(ans[i-1] == '0')
            {
                if(cnt_1_odd > 0)
                {
                    ans += '1';
                    cnt_1_odd--;
                }
                else
                    ans += '0';
            }
            else 
            {
                if(cnt_0_odd > 0)
                {
                    ans += '0';
                    cnt_0_odd--;
                }
                else
                    ans += '1';
            }
        }
        else
        {
            if(ans[i-1] == '0')
            {
                if(cnt_1_even > 0)
                {
                    ans += '1';
                    cnt_1_even--;
                }
                else
                    ans += '0';
            }
            else 
            {
                if(cnt_0_even > 0)
                {
                    ans += '0';
                    cnt_0_even--;
                }
                else
                    ans += '1';
            }
        }
    }

    ll cnt = 0;
    for(int i = 0 ; i < n-1 ; i++)
    {
        if(ans[i] == '0' && ans[i+1] == '1')
            cnt++;
    }

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