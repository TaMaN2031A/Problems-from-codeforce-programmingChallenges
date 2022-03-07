#include <stdio.h>
#include <stdlib.h>
#define max 100
int main()
{
    int m,n,stars = 0, fieldno=0;
    char a[max][max],b[max][max];
    while(scanf("%i %i",&m,&n) != EOF)
    {
        fieldno++;
        for( int i = 0; i < m; i++)
        {
            for( int j = 0; j < n; j++)
            {
                scanf(" %c",&a[i][j]);
            }
        }
        for( int i = 0; i < m; i++)
        {
            for( int j = 0; j < n; j++)
            {
                if(a[i][j] == '*')
                {
                    b[i][j] = '*';
                }
                else
                {
                    if(a[i+1][j]=='*') stars++;
                    if(a[i][j+1]=='*') stars++;
                    if(a[i+1][j+1]=='*')stars++;
                    if(a[i-1][j]=='*')stars++;
                    if(a[i][j-1]=='*')stars++;
                    if(a[i-1][j-1]=='*')stars++;
                    if(a[i-1][j+1]=='*')stars++;
                    if(a[i+1][j-1]=='*')stars++;
                    b[i][j] = stars;
                    stars = 0;
                }
            }
        }
        printf("Field #%i:\n",fieldno);
        for( int i = 0; i < m; i++)
        {
            for( int j = 0; j < n; j++)
            {
                if(b[i][j] == '*') printf("%c",b[i][j]);
                else printf("%i",b[i][j]);
            }
            printf("\n");
        }
        printf("\n");
      }
    return 0;
}
