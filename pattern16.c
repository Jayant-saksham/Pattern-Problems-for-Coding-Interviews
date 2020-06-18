// *********
// **** ****
// ***   ***
// **     **
// *       *
// **     **
// ***   ***
// **** ****
// *********

#include<stdio.h>
int main(){
    int n,i,j,k=0,mid;
    printf("Enter n");
    scanf("%d",&n);
    mid=(n+1)/2;
    if (n%2==0)
    {
        printf("Shape not possible");
    }
    else
    {
        
    for(i=1;i<=n;i++){
        i<=mid?k++:k--;
        for(j=1;j<=n;j++){
            if(j<=(mid-k+1)||j>=(mid+k-1)){
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