#include <stdio.h>
#include <stdlib.h>
#define max 100
void merge(int arr[],int start, int mid, int end)
{
    int i = start, m = mid+1,l[max],r[max],leftC = 0, rightC = 0;
    for(int i = 0; i < m-start; i++)
    {
        l[i] = arr[start+i];
    }
    for(int i = 0; i < end - m + 1; i++)
    {
        r[i] = arr[m+i];
    }

    while(leftC < m-start && rightC < end - m + 1)
    {
        if(l[leftC] < r[rightC])
        {
            arr[i] = l[leftC];
            i++; leftC++;
        }
        else if(l[leftC] > r[rightC])
        {
            arr[i] = r[rightC];
            i++; rightC++;
        }
        else if(l[leftC] == r[rightC])
        {
            arr[i]=r[rightC];
            i++;
            arr[i]=r[rightC];
            i++;rightC++;leftC++;
        }
    }

    while(leftC < m-start)
        {
            arr[i] = l[leftC];
            leftC++; i++;
        }

    while(rightC < end - m + 1)
        {
            arr[i] = r[rightC];
            i++; rightC++;
        }

    return;
}
void divide_conquer(int arr[], int start, int end)
{
    int mid;
    if(start < end)
    {
        mid = (start+end)/2;
        divide_conquer(arr,start,mid);
        divide_conquer(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
    return;
}

int main()
{
    int n, arr[max];
    scanf("%i",&n);
    for(int i = 0; i < n; i++)
    {scanf("%i",&arr[i]);}

    divide_conquer(arr,0,n-1);

    for(int i = 0; i < n; i++)
    {
        printf("%i ",arr[i]);
    }
        return 0;
}
