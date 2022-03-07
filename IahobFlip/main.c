#include <stdio.h>
#include <stdlib.h>
#define max 100
int main()
{
    int n,arr[max],imax = 0,count = 0;
    scanf("%i",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            count = 0;
            for(int k = 0; k < n;k++)
            {
                if(k <= j && k >= i)
                {
                    if(1-arr[k] == 1)
                        count ++;
                }
                else
                {
                    if(arr[k] == 1)
                        count ++;
                }
            }
            if(count > imax)
                imax = count;
        }
    }
    printf("%i", imax);
    return 0;
}
