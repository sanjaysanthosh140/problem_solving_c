#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i,j,f,k,n=4,y;
    for(i=-n;i<=n;i++){

        if(i<0){
            k= -i;
        }else{
            k = i;
        }

        for(j=0;j<k+1;j++){
            printf(" ");
        }

        for(j=0,f=1;j<(n-k)*2+1;f++,j++){
            printf("%d",f);
        }
        printf("\n");

    }
}