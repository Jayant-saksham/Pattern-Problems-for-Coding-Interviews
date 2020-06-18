//      1
//     1 1
//    1 2 1
//   1 3 3 1 
//  1 4 6 4 1


#include<stdio.h>

int fact(int n){
    int f=1;
    while(n>=1){
        f=f*n;
        n--;
    }
    return (f);
}

int combination(int n,int r){
    return(fact(n)/fact(n-r)/fact(r));
}

void print_triangle(int line){
    int i,j,k,r;
    for(i=1;i<=line;i++){
        k=1;
        r=0;
        for(j=1;j<=(2*line-1);j++){
            if(j>=(line+1-i) && j<=(line-1+i) &&k ){
                printf("%d ",combination(i-1,r));
                k=0;
                r++;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }    
}

int main(){
    int line;
    printf("Enter number of lines");
    scanf("%d",&line);
    print_triangle(line);

}
