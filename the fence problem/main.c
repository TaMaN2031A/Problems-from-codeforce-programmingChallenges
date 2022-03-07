#include <stdio.h>
#include <stdlib.h>
#define max 100

int main()
{
    int reciever, n, h, counter = 0;
    scanf("%i %i", &n, &h);
    for(int i = 0; i < n; i++)
    {
        scanf("%i",&reciever);
        if(reciever <= h)
            counter++;
        else
            counter+=2;
    }
    printf("%i",counter);
    return 0;
}
