#include <stdio.h>
int fact(int a){
    if(a==1||a==0){
        return 1;
    }
    
    return a*fact(a-1);

}
int main(){
    int num;
    scanf("%d",&num);
    int ans=fact(num);
    printf("The factorial of %d is %d",num,ans);
}