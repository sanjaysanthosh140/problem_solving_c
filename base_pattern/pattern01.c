#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i,j,n=4,k=50;
   for(i=1;i<=n;i++){
    for(j=0;j<i;j++){
        printf("%d ",k);
        k=k-5;
      
    }
    printf("\n");
   }
   
}