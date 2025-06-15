#include <stdio.h>
#include <stdlib.h>
int main(void){
int i,j,value=19,value2,x,y;

for(i=value;i>=0;i--){
    if(i%2==0){
        value2++;
          for(j=1;j<=value2;j++){
              printf("*");
          }
                for(x=1;x<=i;x++){
                    printf("$");
                }
          for(y=1;y<=value2;y++){
           printf("*");
         }
         printf("\n");
    }
}
}
