#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  n, counter = 1, reciev1, reciev2 = -3;
    scanf("%i", &n);
    for(int i = 0; i< n; i++)
    {
        if(i%2==0){
            scanf("%i",&reciev1);
            if(reciev1 != reciev2 && reciev2 != -3)
                counter++;
        }
        else{
            scanf("%i",&reciev2);
            if(reciev1 != reciev2)
                counter++;
            }
    }
        printf("%i",counter);
    return 0;
}
