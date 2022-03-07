#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; int sum=0;
    scanf("%i",&n);
    int a[100][100];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
        scanf("%i",&a[i][j]);
           if( i == j || j == (n-1)/2 || i == (n-1)/2 || i == n-j-1 || j == n-i-1)
               {
                    sum+=a[i][j];
               }
        }
    }
    printf("%i",sum);
    return 0;
}
