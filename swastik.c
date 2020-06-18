// *     * * * *
// *     *
// *     * 
// * * * * * * *
//       *     *
//       *     * 
// * * * *     * 

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter odd number");
    scanf("%d",&n);
    if(n%2==0){
        printf("I said odd number");
    }
    else{
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==((n+1)/2)){
                printf("*");
            }
            else if(i<((n+1)/2) && j==1||j==((n+1)/2)){
                printf("*");
            }
            else if(i==1 && j>((n+1)/2)){
                printf("*");
            }
            else if(i>((n+1)/2) && j==n){
                printf("*");
            }
            else if(i==n && j<((n+1)/2)){
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