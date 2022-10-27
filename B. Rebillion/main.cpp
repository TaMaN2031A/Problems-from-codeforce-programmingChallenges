#include <iostream>
#include <bits/stdc++.h>
#define fire cout
#define play long long

using namespace std;
int arr[200000];
void solve()
{
    int n, c = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0, j = n - 1;
    while(i < j)
    {
        if(arr[i] == 0 && arr[j] == 1)
            i++, j--;
        else if(arr[i] == 0 && arr[j] == 0)
            i++;
        else if(arr[i] == 1 && arr[j] == 1)
            j--;
        else if(arr[i] == 1 && arr[j] == 0)
            c++, i++, j--;
    }
    cout << c << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}