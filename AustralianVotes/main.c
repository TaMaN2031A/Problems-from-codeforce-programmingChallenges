#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, counter = 1, largest = -1, winner = -1, endCheck = 0, index, biggestset[20], bigcounter = 0, x = 1, scnhelp, r = 0, c = 0;
    int ballot[1000][20],v[20];
    scanf("%i",&n);
    /*while(scanf("%i",&scnhelp) != EOF)
    {
        if(scnhelp == 106) break;
        else
        {
        ballot[r][c] = scnhelp; c++;
        if(c == n){
            r++; c = 0;
        }
        }
    }*/
    for(int i = 0; i<1000 ;i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(scanf("%i",&ballot[i][j]) == EOF)
                break;
        }
    }


    while(counter <= n && winner == -1){
        bigcounter = 0; endCheck = 0; largest = -1; x = 1;
        for(int i = 0; i < 1000; i++){
        for(int j = 0; j < n; j++){
            if(ballot[i][j] == counter) v[j]++;}}
        for(int i = 0; i < n; i++){
            if(v[i] > largest) largest = v[i];}
        for(int i = 0; i < n; i++){
            if(v[i] == largest) {
                index = i ;endCheck ++;
                biggestset[bigcounter] = i;
                bigcounter++;
                                }
                                  }



        if(endCheck == 1)
        {
            winner = index;
            continue;
        }
        else{
            for(int k = 0; k < endCheck; k++){
                for(int i = 0; i < 1000; i++){
                    for(int j = 0; j < n; j++){
                        if(j == biggestset[k] && ballot[i][j] == counter && x!= 10){
                            ballot[i][j] = 0; x = 10; j = 0;}
                        else ballot[i][j] = 0;}
                    x = 1;}}}

        counter++;
    }
    if(counter == n) printf("No Winner, Good luck in the next time");
    else  printf("%i",winner+1);

    return 0;
}
