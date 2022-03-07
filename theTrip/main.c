#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 100
int main()
{
    int n,i = 0,sum;
    double avg, key, totalHigh = 0.0, totalLow = 0.0, a[max];
    scanf("%i",&n);
    while( i < n )
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        i++;
    }
    avg=sum/n;
    i=0;
    while(i < n)
    {
        key=a[i]-avg;
        if(key >= 0) totalHigh += floor(key*100)/100;
        else totalLow -= ceil(key*100)/100;
        i++;
    }
    if(totalHigh>totalLow) printf("$%.2f\n",totalHigh);
    else printf("$%.2f\n",totalLow);

    return 0;
}
