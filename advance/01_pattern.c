#include <stdio.h>
#include <stdlib.h>
int main(){
       int i,j,x,ilt=6;

       for(i=1;i<=ilt;i++){
        for(x=ilt-i;x>=0;x--){
            printf(" ");
        }
         for(j=1;j<=i;j++){
            printf("%d  ",j);
         }
          printf("\n");
       }

}