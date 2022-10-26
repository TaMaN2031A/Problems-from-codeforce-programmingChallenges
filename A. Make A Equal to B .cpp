//
// Created by LeNoVo on 10/26/2022.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr1[100000], arr2[100000];
void solve()
{
    int arr1[100], arr2[100];
    int n;
    cin >> n;
    int zeroFirstCounter = 0, zeroSecondCounter = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        if(!arr1[i])
            zeroFirstCounter++;
    }
    for(int i = 0; i < n; i++)
    {
        cin >> arr2[i];
        if(!arr2[i])
            zeroSecondCounter++;
    }
    int difference = 0;
    for(int i = 0; i < n; i++)
        if(arr1[i] != arr2[i])
            difference++;
    if(difference == abs(zeroSecondCounter-zeroFirstCounter))
        cout << difference;
    else
        cout << abs(zeroFirstCounter-zeroSecondCounter)+1;
    cout << endl;

}

int main() {
    int t;
    std::cin >> t;
    while(t--)
        solve();
    return 0;
}