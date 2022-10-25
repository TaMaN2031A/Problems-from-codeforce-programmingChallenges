#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define play long long
#define fire cout
void solve()
{
    int n, m;
    cin >> n >> m;
    if((n == m && n == 3) || (n == 2 && m == 3) || (n == 3 && m == 2))
        cout << 2 << " " << 2 << endl;
    else
        cout << 1 << " " << 1 << endl;
}
int main() {
    play t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}