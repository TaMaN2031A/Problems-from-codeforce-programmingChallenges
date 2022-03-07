#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 250
void checkAndDraw(char recurarr[], int recindex, int addad, int fC, char oldColr, int mainY)
{
    if(recindex >= 0 && recindex < addad)
    {

        if(recurarr[recindex+1]==oldColr && recindex+1 < addad)
        {
            recindex++;
            recurarr[recindex] = fC;
            checkAndDraw(recurarr,recindex,addad,fC,oldColr, mainY);
        }

        if(recurarr[recindex-1]==oldColr && recindex-1 >= 0)
        {
            recindex--;
            recurarr[recindex] = fC;
            checkAndDraw(recurarr,recindex,addad,fC,oldColr,mainY);
        }

        if(recurarr[recindex-mainY]==oldColr && recindex-mainY >= 0)
        {
            recindex-=mainY;
            recurarr[recindex] = fC;
            checkAndDraw(recurarr,recindex,addad,fC,oldColr,mainY);
        }

        if(recurarr[recindex+mainY]==oldColr && recindex+mainY < addad)
        {
            recindex+=mainY;
            recurarr[recindex] = fC;
            checkAndDraw(recurarr,recindex,addad,fC,oldColr,mainY);
        }
        if(recurarr[0]==oldColr)
            recurarr[0] = fC;

    }
    else return;
}






int main()
{
    char reciev1,reciev2,pic[max][max],lC,vC,hC,kC,fC;
    int mainX,mainY,lX,lY,vX1,vY,vX2,hX,hY1,hY2,kX1,kX2,kY1,kY2,fX,fY,addad = 0,recindex;
    scanf(" %c",&reciev1);
    while(reciev1!='I')
    {scanf(" %c",&reciev1);}
    scanf("%i %i\n",&mainY,&mainX);
    // NOW the array is established
    char recurarr[mainX*mainY];
    for(int i = 0; i < mainX; i++)
                {
                    for(int j = 0; j < mainY; j++)
                    {
                        pic[i][j] = 'O';
                    }
                }

    while(scanf(" %c",&reciev2) != EOF)
    {
        switch(reciev2)
        {


            case('C'):
                for(int i = 0; i < mainX; i++)
                {
                    for(int j = 0; j < mainY; j++)
                    {
                        pic[i][j] = 'O';
                    }
                }
                break;



            case('L'):
                scanf(" %i %i",&lY,&lX);
                scanf(" %c\n",&lC);
                lY--;lX--;
                pic[lX][lY]=lC;
                break;


            case('V'):
                scanf("%i %i %i",&vY,&vX1,&vX2);
                scanf(" %c\n",&vC);
                vY--;vX1--;vX2--;
                for(int i = 0; i < mainX ; i++)
                {
                    if((i >= vX1) && (i <= vX2))
                    {
                        for(int j = 0; j < mainY ; j++)
                        {
                            if(j == vY)
                                pic[i][j] = vC;
                        }
                    }
                }
                break;


            case('H'):
                scanf("%i %i %i",&hY1,&hY2,&hX);
                scanf(" %c\n",&hC);
                hX--;hY1--;hY2--;
                for(int i = 0; i < mainX  ; i++)
                {
                    if(i == hX)
                    {
                    for(int j = 0; j < mainY ; j++)
                    {
                        if(j >= hY1 && j <= hY2)
                        pic[i][j] = hC;
                    }
                    }
                }
                break;


            case('K'):
                scanf("%i %i %i %i",&kX1,&kY1,&kX2,&kY2);
                scanf(" %c\n",&kC);
                kX1--;kY1--;kX2--;kY2--;
                for(int i = 0; (i < mainX) && (i <= kX2) && (i >= kX1) ; i++)
                {
                    for(int j = 0; j < mainY && j <= kY2  && j >= kY1; j++)
                    {
                        pic[i][j] = kC;
                    }
                }
                break;


            case('F'):
            for(int i = 0; i < mainX; i++)
            {
                for(int j = 0; j < mainY; j++)
                {
                    recurarr[addad]=pic[i][j];
                    addad++;
                }
            }
            scanf("%i %i", &fX, &fY);
            scanf(" %c\n", &fC);
            fX--;fY--;
            recindex = mainX*fX + fY; // for calculating its index in the oned array
            checkAndDraw(recurarr,recindex,addad,fC,recurarr[recindex],mainY);
            recurarr[recindex] = fC;
            addad = 0;

            for(int i = 0; i < mainX; i++)
            {
                for(int j = 0; j < mainY; j++)
                {
                    pic[i][j] = recurarr[addad];
                    addad++;
                }
            }
            break;

/*                                                            */
            case('S'):

                for(int i = 0; i < mainX; i++)
                {
                    for(int j = 0; j < mainY; j++)
                    {
                        printf("%c",pic[i][j]);
                    }
                    printf("\n");
                }
                break;


            case('X'):
                goto a;
                break;


            default:
                break;
        }
    }

   a:
   return 0;
}
