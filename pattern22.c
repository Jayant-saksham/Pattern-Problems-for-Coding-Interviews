//     A1 
//    AB12
//   ABC123
//  ABCD1234
// ABCDE12345
#include<stdio.h>
int main(){
    int n,i,j,k;
    char ch;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
         ch='A';
        for(j=1;j<=(2*n);j++){
            if(j>=(n-i+1)&&j<=(n+i)){
            if(j==(n+1))
            ch='1';
            printf("%c",ch);
            ch++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}