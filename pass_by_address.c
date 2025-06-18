#include <stdio.h>
int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
int main(){
    int a=5,b=9;
    printf("the value of a is %d and b is %d\n",a,b);
    swap(&a,&b);
    printf("the value of a is %d and b is %d\n",a,b);

}