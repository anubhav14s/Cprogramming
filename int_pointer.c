#include <stdio.h>
int main(){
    int age=32;
    int *ptr=&age;
    printf("Address of the variable is %u\n",ptr);
    printf("Address of the variable is %u\n",&age);
    printf("%d\n",*ptr);
    printf("%d\n",age);
    printf("%d\n",*(&age));
    return 0;
}