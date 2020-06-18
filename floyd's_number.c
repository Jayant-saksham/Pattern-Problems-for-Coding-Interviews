#include<stdio.h>
int main(){
    int column,i,j,first=1;
    printf("Enter number of columns");
    scanf("%d",&column);
    for(i=0;i<column;i++){
        for(j=0;j<=i;j++){
            printf("%d\t",first++);
        }
        printf("\n");
    }
}