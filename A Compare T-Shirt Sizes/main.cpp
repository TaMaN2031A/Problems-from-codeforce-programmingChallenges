#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define play long long
#define fire cout
void solve()
{
    string x, y;
    cin >> x >> y;
    char a = x.back(), b = y.back();
    if(a==b) {
        if(x.size()==y.size())
            cout << "=" << endl;
        else if(a=='S')
            cout << (x.size()>y.size()? '<':'>') << endl;
        else
            cout << (x.size()>y.size()? '>':'<') << endl;
    }else
            cout << (a>b?'<':'>') << endl;

}
int main() {
    play t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}