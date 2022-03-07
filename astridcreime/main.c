#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int n,m; char a[MAX][MAX]; int c[4][2];
    int counter=0; int x=0,y=0;
    scanf("%i%i",&n,&m);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            {
                scanf("%c",&a[i][j]);
            }
    }
     for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            {
                if(a[i][j]=='*')
                    {
                        c[counter][0]=i;
                        c[counter][1]=j;
                        if(counter==2)
                            {
                            if(c[0][0]==c[1][0])
                                {
                                x=c[2][0];
                                if(c[2][1]==c[0][1])
                                    {
                                        y=c[1][1];
                                    }
                                else if(c[2][1]==c[1][1])
                                    {
                                        y=c[0][1];
                                    }
                                 break;
                                }

                            else if(c[0][1]==c[1][1])
                                {
                                y=c[2][1];
                            if(c[2][0]==c[0][0])
                                    {
                                        y=c[1][0];
                                    }
                                else if(c[2][0]==c[1][0])
                                    {
                                        y=c[0][0];
                                    }
                                 break;
                                }
                            }
                        counter++;
                    }
            }
    }
    printf("%i %i",x,y);

    return 0;
}
