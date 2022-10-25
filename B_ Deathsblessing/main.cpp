#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long sumu = 0, n;
    int maxi = -1;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        sumu+=a;
    }
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        sumu+=a;
        maxi = max(maxi,a);
    }
    cout << sumu-maxi << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
