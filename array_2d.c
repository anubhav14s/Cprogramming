#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    printf("Enter the number of subjects: ");
    scanf("%d",&m);
    int a[n][m];
    for (int i=0;i<n;i++){
        printf("Enter the marks of student %d",i+1);
        for (int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<n;i++){
        
        for (int j=0;j<m;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}