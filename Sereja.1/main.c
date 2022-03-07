#include <stdio.h>
#include <stdlib.h>
#define max 1000

int main()
{
    int i = 0, j = 0, sere = 0, demo = 0, counter = 0,arr[max], n;
    scanf("%i", &n);
    j = n - 1;
    for(int i = 0; i < n; i++)
    {
        scanf("%i",&arr[i]);
    }
    while(i != j)
    {
        if(arr[i] > arr[j])
        {
            i++;
            if(counter % 2 == 0)
                sere += arr[i];
            else
                demo += arr[i];
        }
        else
        {
            j--;
            if(counter % 2 == 0)
                sere += arr[i];
            else
                demo += arr[i];
        }
        counter++;
    }

    printf("%i %i",sere,demo);
    return 0;
}
