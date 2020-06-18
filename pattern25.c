// 1
// 10
// 101
// 1010
// 10101
// 101010
#include<stdio.h>
int main(){
    int n,i,j,flag;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        flag=1;
        for(j=1;j<=i;j++){
            if(flag==1){
            printf("1");
            flag--;
            }
            else
            {
                printf("0");
                flag++;
            }
        }
        printf("\n");
    }
}