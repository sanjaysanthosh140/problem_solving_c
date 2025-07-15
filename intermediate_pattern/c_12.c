#include <stdio.h>
#include <stdlib.h>

int main(void){
 int i,j,k,n=6;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            if(j%2==0){
                printf("_");
            }else{
                printf("*");
            }
            
        }
        printf("\n");

        if(i==1){
            for(k=2;k<=n;k++){
                for(j=1;j<=k;j++){
                    if(j%2==0){
                        printf("_");
                    }else{
                        printf("*");
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}