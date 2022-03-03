#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x , a , b;
        cin >> x >> a >> b;
        long long int points = a + (b*2);
        if(points >= x)
            cout << "Qualify" << endl;
        else
            cout << "NotQualify" << endl;
    }
    return 0;
}