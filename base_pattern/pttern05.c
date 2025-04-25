#include <stdio.h>
#include <stdlib.h>
int main(void){

    int i,j,k,n=3;
    for(i=1;i<=n;i++){
        for(j=0;j<2;j++){
            for(k=0;k<n*i;k++){
                printf("*");
            }
            printf("\n");
        }

        if(i==n){
            break;
        }

        for(j=0;j<i;j++){
            printf("*\n");
        }
    }

}