#include <stdio.h>
int main(){
    int price=3287.97;
    int *ptr=&price;
    printf("Address of the variable is %u\n",ptr);
    printf("Address of the variable is %u\n",&price);
    printf("%d\n",*ptr);
    printf("%d\n",price);
    printf("%d\n",*(&price));
    return 0;
}