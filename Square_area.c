#include <stdio.h>
#include <stdlib.h>
int main(){
    int side,area;
    printf("Enter the side of the square: ");
    scanf("%d",&side);
    if (side<0){
        side=abs(side);
    }
    else if(side==0){
        printf("Side can not be zero");
        return 0;
    }
    area=side*side;
    printf("The area of the square of side %d is %d",side,area);
    return 0;

}