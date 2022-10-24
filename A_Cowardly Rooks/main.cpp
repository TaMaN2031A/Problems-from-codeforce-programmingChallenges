#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define play long long
#define fire cout
void solve()
{
   map <play, int> x, y;
   play n, m;
   cin >> n >> m;
   for(int i = 0; i < m; i++)
   {
       play a, b;
       cin >> a >> b;
       x[a]=1;
       y[b]=1;
   }
   bool ok = false;
   for(int i = 1; i <= n; i++)
   {
       for(int j = 1; j <= n; j++)
       {
           if(!(x[i]||x[j]))
           {
               ok = true;
               goto ah;
           }
       }
   }
    ah:
    if(ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
int main() {
    play t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}