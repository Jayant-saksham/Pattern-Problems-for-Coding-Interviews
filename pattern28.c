//       1
//     3 2
//   6 5 4
//10 9 8 7

#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the value of n");
    scanf("%d",&n);
    int initial=0;
    for(i=1;i<=n;i++){
        initial=initial+2*(i-1)+1;
        for(j=1;j<=n;j++){
            if(j>=(n-i+1)){
                printf("%d",initial);
                initial--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}