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
        char arr[8][8];
        for(int i=0; i < 8; i++)
            for(int j =0; j<8; j++)
                cin>>arr[i][j];
        int req=-1;
        for(int i=0;i<8;i++){
            int j=0;
            for(;j<8;j++){
                if(arr[i][j] == 'R');
                else break;
            }if(j==8)
            {
                req = 1;
                break;
            }
        }
        for(int i = 0; i < 8; i++){
            int j = 0;
            for(;j<8;j++){
                if(arr[j][i] == 'B');
                else break;
            }if(j==8)
            {
                req = 0;
                break;
            }
        }
        if(req)
            cout<<"R" << endl;
        else
            cout<<"B" << endl;
    }
}