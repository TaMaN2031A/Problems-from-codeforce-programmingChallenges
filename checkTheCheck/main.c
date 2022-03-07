#include <stdio.h>
#include <stdlib.h>
int verticalCheckUp(char trarray[],int trcount,int checkedposition)
{
    int x;
    if(checkedposition >= 0)
    {
        if(trarray[checkedposition] == '.')
            x = verticalCheckUp(trarray, trcount, checkedposition-8);
        else if(trarray[checkedposition] == 'Q' || trarray[checkedposition] == 'R' )
            x = 1;
        else
            x = 0;
    }
    else
        x = 0;
    return x;
}
int verticalCheckDown(char trarray[],int trcount,int checkedposition)
{
    int x;
    if(checkedposition >= 64)
    {
        if(trarray[checkedposition] == '.')
            x = verticalCheckDown(trarray, trcount, checkedposition+8);
        else if(trarray[checkedposition] == 'Q' || trarray[checkedposition] == 'R' )
            x = 1;
        else
            x = 0;
    }
    else
        x = 0;
    return x;
}
int horizontalCheckRight(char trarray[],int trcount,int checkedposition)
{
   int x;
   if(checkedposition % 8 != 0)
    {
        if(trarray[checkedposition] == '.')
            x = horizontalCheckRight(trarray, trcount, checkedposition+1);
        else if(trarray[checkedposition] == 'Q' || trarray[checkedposition] == 'R' )
            x = 1;
        else
            x = 0;
    }
    else
        x = 0;
    return x;

}
int horizontalCheckLeft(char trarray[],int trcount,int checkedposition)
{
   int x;
   if(checkedposition+1 % 8 != 0)
    {
        if(trarray[checkedposition] == '.')
            x = horizontalCheckLeft(trarray, trcount, checkedposition-1);
        else if(trarray[checkedposition] == 'Q' || trarray[checkedposition] == 'R' )
            x = 1;
        else
            x = 0;
    }
    else
        x = 0;
    return x;

}
int upRightCheck(char trarray[],int trcount,int checkedposition)
{
    int x;
    if(checkedposition > 0)
    {
        if(trarray[checkedposition] == '.')
            x = upRightCheck(trarray, trcount, checkedposition-7);
        else if(trarray[checkedposition] == 'Q' || trarray[checkedposition] == 'B' )
            x = 1;
        else
            x = 0;
    }
    else
            x = 0;
    return x;
}
int upLeftCheck(char trarray[], int trcount, int checkedposition)
{
    int x;
   if(checkedposition > 0)
    {
        if(trarray[checkedposition] == '.')
            x = upLeftCheck(trarray, trcount, checkedposition-9);
        else if(trarray[checkedposition] == 'Q' || trarray[checkedposition] == 'B' )
            x = 1;
        else
            x = 0;
    }
    else
            x = 0;
    return x;
}
int downRightCheck(char trarray[], int trcount, int checkedposition)
{
    int x;
    static int counter = 0;
    if(checkedposition > 0)
    {
       if(trarray[checkedposition] == 'P' && counter == 0)
        {
        x = 1;
        if(trarray[checkedposition] == '.')
        {
            counter++;
            x = downRightCheck(trarray, trcount, checkedposition+9);
        }
        else if(trarray[checkedposition] == 'Q' || trarray[checkedposition] == 'B' )
            x = 1;
        else
            x = 0;
    }
    else
            x = 0;
    return x;
}
int downLeftCheck(char trarray[], int trcount, int checkedposition)
{
   int x;
   static int counter = 0;
   if(checkedposition > 0)
    {
        if(trarray[checkedposition] == 'P' && counter == 0)
            x = 1;
        else if(trarray[checkedposition] == '.')
        {
            counter++;
            x = downLeftCheck(trarray, trcount, checkedposition+7);
        }
        else if(trarray[checkedposition] == 'Q' || trarray[checkedposition] == 'B' )
            x = 1;
        else
            x = 0;
    }
    else
            x = 0;
    return x ;
}

int main()
{
    char table[8][8],trarray[64];
    int i, j, endcheck = 1, endcounter, trcount = 0, check = 0, blackindex, whiteindex, noGames = 0;

   /* while(endcheck == 1)
    {*/
        check = 0;
        noGames++;
        for(i = 0; i < 8 ; i++)
        {
            for(j = 0; j < 8; j++)
            {
                scanf(" %c", &table[i][j]);     // o(64)
            }
        }
        for(i = 0; i < 8 ; i++)
        {
            for(j = 0; j < 8; j++)
            {
                if(table[i][j] == '.')
                    endcounter++;
                trarray[trcount] = table[i][j];
                if(trarray[trcount] == 'k') blackindex = trcount;
                else if(trarray[trcount] == 'K') whiteindex = trcount;
                trcount++;
            }
        }



        if(endcounter==32)
        {
            endcheck = 0;
            //continue;
        }
        endcounter = 0; i = 0; j = 0;



        for(i = 0; i < 8 ; i++)
        {
            for(j = 0; j < 8; j++)
            {
                trarray[trcount] = table[i][j];
                trcount++;
            }
        }



        check = verticalCheckUp(trarray,trcount,blackindex-8) + verticalCheckDown(trarray,trcount,blackindex+8) + horizontalCheckRight(trarray,trcount,blackindex+1) + horizontalCheckLeft(trarray,trcount,blackindex-1) ;
        check += upRightCheck(trarray,trcount,blackindex-7) + upLeftCheck(trarray,trcount,blackindex-9) + downRightCheck(trarray,trcount,blackindex+9) + downLeftCheck(trarray,trcount,blackindex+7);
        if(check != 0)
        {
            printf("Game %i : black king is in check.\n", noGames);
          //  continue;
        }


   // }
    return 0;
}
