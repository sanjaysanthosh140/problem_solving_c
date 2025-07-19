#include <stdio.h>
#include <stdlib.h>
int main(void){

   int i,j,k,n=5,x,y;
   for(i=1;i<=5;i++){
    if(i<=5){
        for(j=1;j<i;j++){
            printf(" ");
        }
        printf("%d",i);
        for(k=1;k<=n-i;k++){
            if(k==n-i){
                printf("%d",i);
            }else{
                printf("  ");
            }
        }

    }
    printf("\n");
     if(i==5){

        for(x=n-1;x>=1;x--){
            if(x>=1){
                for(j=1;j<=x;j++){
                    printf(" ");
                }
                printf("%d",x);
                for(y=1;y<=n-x;y++){
                    if(y==n-x){
                        printf("%d",x);
                    }else{
                        printf("  ");
                    }
                }
            }
            printf("\n");
        }
     }
   }
    return 0;
}