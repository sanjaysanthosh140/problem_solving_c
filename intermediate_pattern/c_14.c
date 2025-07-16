#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,k,n=5;
    for(i=0;i<=n;i++){
        for(j=n;j>=0;j--){
            if(j<=i){
                printf("%d",j);
            }else{
                printf(" ");
            }
        }
    for(k=1;k<=i;k++){
       printf("%d",k);
    }    
    printf("\n");
    }
    //printf("hlo");
}