#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,l,m,n,d,counter;
    scanf("%i\n%i\n%i\n%i\n%i",&k,&l,&m,&n,&d);
    for(int i = 0; i < d; i++)
    {
        if( (i+1)%k == 0 || (i+1)%l == 0 || (i+1)%m == 0 || (i+1)%n == 0 )
            counter++;
    }
    printf("%i",counter);
    return 0;
}
