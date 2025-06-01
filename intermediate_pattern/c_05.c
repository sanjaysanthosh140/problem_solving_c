#include <stdio.h>
#include <stdlib.h>

int main(void){
   int i,k,j,x,value=6;
   for(i=value;i>=1;i--){
    for(k=i;k<=value;k++){
        printf(" ");
    }
    
    if(i%2==0){
        for(x=1;x<=i;x++){
            printf("$");
        }
        printf("\n");

    } else{
        for(k=1;k<=i;k++){
         printf("*");

     }
     printf("\n");
 }
   }
    
    return 0;
}