//     1
//    12A 
//   123AB 
//  1234ABC

#include<stdio.h>
int main(){
    int n,i,j,k;
    char ch;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
         ch='1';
        for(j=1;j<=(2*n-1);j++){
            if(j>=(n-i+1)&&j<=(n+i-1)){
            if(j==(n+1))
            ch='A';
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

 