#include <stdio.h>
int main () {
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    if (num%5==0) {
        printf("It is multiple of 5");
    }
    else if (num%5!=0) {
        printf("It is not multiple of 5");
    }
    else if (num%7==0) {
        printf("It is divisible by 7");
    }
    else {
        printf("It is not divisible by 7");
    }
    return 0;
}
