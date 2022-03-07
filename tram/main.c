#include <stdio.h>
#include <stdlib.h>
#define max 1000

int main()
{
    int n,sum = 0,passIn[max],passOut[max],maxC = 0;
    scanf("%i",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%i",&passOut[i]);
        scanf("%i",&passIn[i]);
         sum += passIn[i]-passOut[i];
        if(sum > maxC)
        {
            maxC = sum;
        }
    }
    printf("%i",maxC);

    return 0;
}
