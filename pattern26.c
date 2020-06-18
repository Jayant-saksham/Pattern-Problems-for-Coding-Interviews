// * * * * * * *
// *           *
// *   * * *   *
// *   *   *   *
// *   * * *   *
// *           *
// * * * * * * *         

#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i==1||i==n||j==1||j==n) &&(i>(n/2)&&i<=((n/2)+2)&&j>=(n/2)&&j<=((n/2)+2))){
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}

