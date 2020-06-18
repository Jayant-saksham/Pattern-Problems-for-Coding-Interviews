// 654321
// 54321
// 4321
// 321
// 21
// 1

#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        k=n-i+1;
        for(j=1;j<=n;j++){
            if(j<=(n-i+1)){
                printf("%d",k);
                k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}