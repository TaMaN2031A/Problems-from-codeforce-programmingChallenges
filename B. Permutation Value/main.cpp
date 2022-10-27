#include <iostream>
#include <bits/stdc++.h>
#define fire cout
#define play long long

using namespace std;
void solve()
{
    play n;
    cin >> n;
    play iter = n/2;
    for(int i = 0; i < n/2; i++)
        cout << iter + (n%2?1:0) << " " << iter-- + (n%2?1:0) + n/2 << " ";
    if(n%2)
        cout << 1;
    cout << endl;
}
int main() {
    play t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}