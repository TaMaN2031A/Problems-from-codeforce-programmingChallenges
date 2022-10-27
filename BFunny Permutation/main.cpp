#include <iostream>
#include <bits/stdc++.h>
#define fire cout
#define play long long

using namespace std;
void solve()
{
    int n;
    cin >> n;
    if(n == 3)
        cout << -1 << endl;
    else
    {
        int mid = n/2+1;
        for(int i = 0; i < n/2; i++)
            cout << mid++ << " ";
        if(n%2)
            cout << mid << " ";
        for(int  i = 1; i <= n/2; i++)
            cout << i << " ";
        cout << endl;
    }
}
int main() {
    play t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}