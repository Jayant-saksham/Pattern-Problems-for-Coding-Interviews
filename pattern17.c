//      1
//     232
//    34543
//   4567654
#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        k=i;
        for(j=1;j<=(2*n-1);j++){
            if(j>=(n-i+1)&&j<=(n+i-1)){
                printf("%d",k);
                j<n?k++:k--;
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
}