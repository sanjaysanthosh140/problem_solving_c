#include <stdio.h>
#include <stdlib.h>
int main(void){
   int i,j,k,y,value=10;

   for(i=-10;i<=10;i--){
       

            for(j=1;j<=value-i;j++){
                if(j%2==0){
                    printf("^*");
                }else{
                    printf("*");
                }
            }
            
            printf("\n");
        
        if(i>0){
            for(y=1;y<=value-i;y++){
                if(y%2==0){
                    printf("^*");
                }else{
                    printf("*");
                }
            }
            printf("\n");
        }

   }

   

}