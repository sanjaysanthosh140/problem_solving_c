#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,k , value = 6;
    for(i=1;i<=value;i++){
        if(i%2==0){
            for(j=1;j<=i*2;j++){
                if(j%2==0){
                    printf("$");
                }else{
                    printf("*");
                }
            }
            printf("\n");
        }else{
            for(k=1;k<=i;k++){
                printf("* ");
            }
            printf("\n");
        }
    }



    return 0;
}