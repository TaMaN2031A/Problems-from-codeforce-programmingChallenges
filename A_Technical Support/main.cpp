#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define play long long
#define fire cout
void solve()
{
    stack <int> st;
    play n, c = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        char buff;
        cin >> buff;
        if(buff == 'Q')
            c++;
        else if(buff == 'A' && c!=0)
            c--;
    }
    if(c)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

}
int main() {
    play t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
