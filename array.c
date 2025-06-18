#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER OF STUDENTS:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the marks\n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}