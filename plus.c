// Plus sign
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter odd n");
    scanf("%d",&n);
    if(n%2==0){
        printf("Enter odd number");
    }
    else{
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==(n+1)/2&&i!=(n+1)/2){
                printf("*");
            }
            else if (i==(n+1)/2)
            {
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
}