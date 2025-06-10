#include <stdio.h>
int main (){
    int num1,num2,num3,largest ;
    scanf("%d %d %d",&num1,&num2,&num3);
    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    printf("Largest number is %d\n", largest);

    return 0;
    
}
