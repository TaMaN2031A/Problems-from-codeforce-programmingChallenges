#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr1[100000], arr2[100000];
void solve()
{
    vector <long long> v1, v0;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr1[i];
    int one = 0, zero = 0;
    long long oneS=0, zeroS=0;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(arr1[i] == 1) {
            one++;
            oneS+=a;
            v1.push_back(a);
        }else {
            zero++;
            zeroS+=a;
            v0.push_back(a);
        }
        arr1[i] = 0;
    }
    sort(v0.begin(), v0.end());
    sort(v1.begin(), v1.end());
    for(int i = 1; i < v0.size(); i++)
        v0[i] = v0[i-1] + v0[i];
    for(int i = 1; i < v1.size(); i++)
        v1[i] = v1[i-1] + v1[i];
    long long sum = 0;
    if(v1.size() < v0.size())
    {
        if(v1.size() != 0)
        sum += v1.back()*2+v0[v0.size()-v1.size()-1]+
                (v0.back()-v0[v0.size()-v1.size()-1])*2;
        else
            sum+=v0.back();
    }
    else if(v1.size() > v0.size()) {
        if(!v0.empty()) {
            sum += v0.back() * 2 + v1[v1.size() - v0.size() - 1] +
                   (v1.back() - v1[v1.size() - v0.size() - 1]) * 2;
        }else
            sum+=v1.back();
    }else
        sum += max(v1.back()*2+v0.back()*2 -v0[0], v1.back()*2+v0.back()*2 -v1[0]);

    cout << sum << endl;
}

int main() {
    int t;
    std::cin >> t;
    while(t--)
        solve();
    return 0;
}
