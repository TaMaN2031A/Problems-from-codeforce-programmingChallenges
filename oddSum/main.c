#include <stdio.h>
#include <stdlib.h>
// #define max 2000

int main()
{
    int t, n, count = 0, reciever, oddC = 0, evenC = 0;
    scanf("%i",&t);
    while(count < t)
    {
        scanf("%i",&n);
        for(int i = 0; i < n; i++)
        {
            scanf("%i",&reciever);
            // sum += arr[i];
            if(reciever % 2 == 1)
                oddC++;
            else
               evenC++;
        }
        if(oddC %2 == 1)
            printf("YES\n");
        else if(oddC %2 == 0 && oddC != 0 && evenC != 0)
            printf("YES\n");
        else
          printf("NO\n");
        oddC = 0; evenC = 0;
        count++;
    }
    return 0;
}

