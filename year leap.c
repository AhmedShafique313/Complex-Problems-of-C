#include <stdio.h>
int main () {
    int year;
    printf("\n Enter the year: ");
    scanf("%d",&year);
    // i get some inputs now applying conditions//
    if (year%4==0 && year%100==0 && year%400==0 ) {
        printf("\n %d It is a leap year",year);
    }
    else if (year%4==0 && year%100==0 ) {
        printf("\n %d It is not a leap year",year);
    }
    else {
        printf("\n %d It is not a leap year",year);
    }
    return 0;
}
