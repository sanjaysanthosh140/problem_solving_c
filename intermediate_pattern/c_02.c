#include <stdio.h>
#include <stdlib.h>
int main(void){
int i,j,x,value = 4,k;
 for(i=1;i<=value;i++){
   k=0;
     for(j=1;j<=i*2;j++){
        printf("*");
        k++;
     }
     printf("\n");
    for(x=1;x<=k*2;x++){
        if(x%2==0){
            printf("_");
        }else{
            printf("*");
        }
    }
    printf("\n");
 }

    return 0;
}