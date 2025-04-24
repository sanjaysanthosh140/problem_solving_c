#include <stdio.h>
#include <stdlib.h>
int main(void){
   int i,j,n=5;
   for(i=0;i<n;i++){

    for(j=1;j<=n;j++){ 
        if(i==0||i==n-1||j==n-i){
            printf("* ");
        }else{
            printf("  ");
        }
    }
    printf("\n");
   }

}                       