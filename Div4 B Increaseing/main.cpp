#include <iostream>
#include <bits/stdc++.h>
#define fire cout
#define play long long

using namespace std;
void solve()
{
    map <int, int> m;
    int arr[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    bool bazet = false;
    for(int i = 0; i < n; i++)
        if(m[arr[i]]>1)
            bazet = true;
    if(bazet)
        cout<<"NO";
    else
        cout << "YES";
    cout << endl;
}
int main() {
    play t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}