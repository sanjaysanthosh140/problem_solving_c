#include <stdio.h>
#include <stdlib.h>
int main(void){
     int i,j,k,n=3;
     for(i=1;i<=n;i++){
        for(k=0;k<i;k++){
            for(j=0;j<i*2;j++){
            printf("*");
            }
            printf("\n");
        }

        if(i==n){
            break;
        }

        for(k=0;k<n;k++){
            printf("*\n");
        }

        
     }

}