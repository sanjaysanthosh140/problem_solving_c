#include <stdio.h>
#include <stdlib.h>
int main(){

    int i,j,ilt=5,x;
      
    for(i=1;i<=ilt;i++){

        for(x=0;x<=i;x++){
            printf(" ");
        }
        for(j=1;j<=ilt;j++){
            printf("*");
        }
        printf("\n");
    }

}