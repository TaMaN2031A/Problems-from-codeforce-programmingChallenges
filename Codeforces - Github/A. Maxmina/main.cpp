#include <iostream>
void solve()
{
    int n, k;
    std::cin >> n >> k;
    int buff;
    bool tr = false;
    for(int i = 0; i < n; i++)
    {
        std::cin >> buff;
        if(buff == 1)
            tr = true;
    }
    if (tr)
        std::cout<<"YES";
    else
        std::cout << "NO";
    std:: cout << "\n";
}

int main() {
    int t;
    std::cin >> t;
    while(t--)
        solve();
    return 0;
}
