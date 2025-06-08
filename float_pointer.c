#include <stdio.h>
int main(){
    int cost=3287.97;
    int *ptr=&cost;
    printf("Address of the variable is %u\n",ptr);
    printf("Address of the variable is %u\n",&cost);
    printf("%d\n",*ptr);
    printf("%d\n",cost);
    printf("%d\n",*(&cost));
    return 0;
}