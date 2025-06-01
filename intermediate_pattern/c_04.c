#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i,j,k,y,value=6;
     for(i=1;i<=value;i++){
        for(j=0;j<value-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            if(k%2==0){
                printf("$");
            }else{
                printf("*");
            }
        }
        printf("\n");
     }

   
    return 0;
}