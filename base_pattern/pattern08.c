#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i,j,n=8;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(i%2!=0){
                printf(" *");
            }else{
                printf(" ");
            }
        }

        for(j=i;j<n-1;j++){
            printf("  ");
        }

        for(j=0;j<i;j++){
            if(i%2!=0){ 
                printf("* ");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}