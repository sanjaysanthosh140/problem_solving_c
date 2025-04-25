#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j==1|| j==i  || i==n){
                printf("%d ",j);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}