#include <stdio.h>
int main () {
    float math, physics, chemistry, computer;
    print("\n Enter marks of Mathematics\n");
    scanf("%f",&math);
    printf("\n Enter the marks of Physics\n ");
    scanf("%f",&physics,);
    printf("\n Enter marks of Chemistry\n");
    scanf("%f",&chemistry);
    printf("\n Enter the marks of Computer\n");
    scanf("%f",&computer);
    printf("\n Calculations\n");
    float marks=math+physics+chemistry+computer;
    printf("Total Marks: 400\n")
    printf("\n Obtained Marks:",marks);
    if (marks<=90)
    {
        printf("You got A+ Grade")
    }
    return 0;
}  
