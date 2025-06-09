#include<stdio.h>
int main(){
    char metal;
    int cat;
    scanf("%c",&metal);
    scanf("%d",&cat);
    switch(metal){
        case 'g': printf("You have choosen gold\n");
        switch(cat){
            case 1 : printf("price is 5875 ");
                    break;
            case 2 : printf("price is 8700");
                    break;
            case 3 : printf("price is 8400");
                    break;
            default: printf("Invalid category");
                    break;
        }
        break;
        case 's': printf("You have choosen silver\n");
                 switch(cat){
            case 1 : printf("price is 1030 ");
                    break;
            case 2 : printf("price is 700");
                    break;
            case 3 : printf("price is 450");
                    break;
            default: printf("Invalid category");
            break;
        }

        default: printf("Invalid metal");
    }
    return 0;
    
}
