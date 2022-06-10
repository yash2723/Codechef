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

ll arr[256];
void init()
{
    arr[0] = 0;
    for(int i = 1 ; i < 256 ; i++)
        arr[i] = arr[i >> 1] + (i & 1);
}

ll setBit(ll n)
{
    ll cnt = 0;
    for(int i = 0 ; i < 8 ; i++)
    {
        cnt += arr[255 & n];
        n = n >> 8;
    }
    return cnt;
}

void solve()
{
    ll n , k;
    cin >> n >> k;
    ll totalBits = log2(k);
    ll cnt = 0 , carry = 0;
    // if(n == 1)
    // {
    //     answer(setBit(k));
    //     return;
    // }
    while(totalBits)
    {
        ll lastBit = k & 1;
        if((lastBit) && (n & 1))
            cnt += n - carry;
        else if((lastBit) && !(n & 1))
            cnt += (n-1) - carry;
        else if(!(lastBit) && (n & 1))
            cnt += (n-1) - carry;
        else
            cnt += n - carry;
        
        carry = 0;
        if(!((lastBit) && (n == 2)) && (n != 1))
            carry = 1;
        
        k = k >> 1;
        totalBits--;
    }
    if(!carry)
        cnt++;
    answer(cnt);
}


int main()
{
    FAST;
    init();
    ll t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;

    return 0;
}