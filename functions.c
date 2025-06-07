#include <stdio.h>
int tax(int a);
int main(){
    int salary;
    printf("ENTER YOUR SALARY");
    scanf("%d",&salary);
    printf("Your salary before tax is %d\n",salary);
    tax(salary);
    return 0;
}
int tax(int a){
    int t=(a*18)/100;
     a=a-t;
    printf("You have paid 18 %% tax on your salary which is %d\n",t);
    printf("You salary after tax deduction is %d\n",a);
}