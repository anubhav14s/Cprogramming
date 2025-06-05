#include <stdio.h>
int main (){
    int n1,n2,n3,largest ;
    scanf("%d %d %d",&n1,&n2,&n3);
    largest = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
    printf("Largest number is %d\n", largest);

    return 0;
    
}
