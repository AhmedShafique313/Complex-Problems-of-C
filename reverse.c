# include <stdio.h>
int main() {
    // defining a multiple integer//
    int n, reverse= 0,modulas;
    // input integers//
    printf("Enter a number: ");
    scanf("%d",&n);
    // apply condition which is t be satisfy//
    while (n!=0) {
        modulas= n % 10;
        reverse= reverse*10+modulas;
        n=n/10;
    }
    printf("Reversed order is= %d",reverse);
    return 0;
}
