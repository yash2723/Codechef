#include <bits/stdc++.h> 

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int x1 , x2 , y1 , y2;
        cin >> x1 >> x2 >> y1 >> y2;
        
        if((y1*x2) < (y2*x1))
            cout << -1 << endl;
        else if ((y1*x2) == (y2*x1))
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}

