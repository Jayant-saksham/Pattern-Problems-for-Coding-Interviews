//     A 
//    ABA
//   ABCBA
//  ABCDCBA

#include<stdio.h>
int main(){
    int n,i,j;
    char ch='A';
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        ch='A';        
        for(j=1;j<=(2*n-1);j++){
            if(j>=(n-i+1) && j<=(n+i-1)){
                printf("%c",ch);
                j<n?ch++:ch--;
            }
            else
            {
                printf(" ");
            }
        }  
        printf("\n"); 
        }
}
