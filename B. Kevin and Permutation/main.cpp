#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int t;
    cin>>t;
while(t--)
{
int n, iter;
cin>>n;
iter=n/2;
if(n%2)
iter++;
for(int i = 0; i<n/2; i++)
{
    cout << iter << " " << iter + n/2 << " ";
    iter--;
}
if(n%2)
cout << 1;
cout << endl;
}
// 1 2
}