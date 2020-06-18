//      1
//     12
//    123
//   1234
//  12345
// 123456
//  12345
//   1234
//    123
//     12
//      1

#include<stdio.h>
int main(){
    int n,i,j,k=0,initial,mid;
    printf("Enter n");
    scanf("%d",&n);
    mid=(n+1)/2;
    for(i=1;i<=n;i++){
        if(n%2==0){
            if(i<=n/2+1){
                k++;
            }
            if(i>n/2){
                k--;
            }
        }
        else
        {
            i<=mid?k++:k--;
        }
        initial=1;
        for(j=1;j<=mid;j++){
            if(j>=mid-k+1){
                printf("%d",initial);
                initial++;
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
}