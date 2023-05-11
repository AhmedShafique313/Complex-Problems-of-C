#include<stdio.h>

int main()
{
    int arr[5], i, s = 0, avg;
    for(i = 0; i < 5; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 5; i++)
    {
        s += arr[i];
        avg=s/5;
    }
    printf("\nSum of elements = %d ", s);
    printf("\nAverage of elements= %d", avg);
    return 0;
}