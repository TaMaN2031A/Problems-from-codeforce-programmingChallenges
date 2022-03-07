#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[26],d,cou;
    char c;
    while(scanf(" %c",&c) != EOF && scanf(" %c",&c) != '\n' && scanf(" %c",&c) != ' ')
    {
        int x = c-'0';
        arr[x]++;
        cou++;
    }
    for(int i = 0; i < cou; i++)
    {
        if(arr[i] != 0)
            d++;
    }
    if(d%2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    return 0;
}
