#include <stdio.h>
int main(){
    int a[2][3]={{2,5,8},{4,9,3}};
    int b[3][2]={{4,7},{9,2},{8,1}};
    int r[2][2];
    int sum=0;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            r[i][j]=0;
            for(int k=0;k<3;k++){
                r[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", r[i][j]);
        }
        printf("\n");
    }

    return 0;

}