#include <iostream>
#include <bits/stdc++.h>
#define fire cout
#define play long long
 
using namespace std;
void solve()
{
    play c = 0, n, queries, det, odd = 0, even = 0;
    cin >> n >> queries;
    for(play i = 0; i < n; i++)
    {
        play a;
        cin >> a;
        c+=a;
        if(a%2==1)
            odd++;
        else
            even++;
    }
    for(play i = 0; i < queries; i++)
    {
        play a;
        cin >> det >> a;
        if(det%2==1) {
            c += a * odd;
            if(a%2)
                even += odd, odd = 0;
        }else {
            c += a * even;
            if(a%2)
                odd += even, even = 0;
        }cout << c << endl;
    }
}
int main() {
    play t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}