//      A 
//     CB
//    FED 
//   JIHG
//  ONMLK  
   
#include<stdio.h>
int main(){
    int n,i,j;
    char ch=64;      //ASCII of 'A'=65
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        ch=ch+2*(i-1)+1;
        for(j=1;j<=n;j++){
            if(j>=(n-i+1)){
            printf("%c",ch);
            ch--;
            } 
            else
            {
                printf(" ");
            }            
        }
        printf("\n");
    }
}
// https://text.imageonline.co/