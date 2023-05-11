#include <stdio.h>
int main() {
    float fl[10];
    int i;
    for(i=0; i<10; i++) {
        printf("Enter Element= %d:", i+1);
        scanf("%f", &fl[i]);
    }
    printf("The elements of array are= \n");
    for(i=0; i<10; i++) {
        printf("%.2f", fl[i]);
    }
    return 0;
}