#include <stdio.h>
int main () {
    int integer, num;
    int t1=0, t2=1, nextone=t1+t2;
    printf("\n Enter the number of terms:: ");
    scanf("\n %d",&num);
    printf("Fibonnaci Series: %d",t1);
    for (integer=3;integer<=num;++integer) {
        printf("\n %d",nextone);
        t1=t2;
        t2=nextone;
        nextone=t1+t2;
    }
    return 0;
}
