#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,j,x,ilt=6;
    for(i=1;i<=ilt;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf(
            "\n"
        );
        if(i==ilt){
            for(x=ilt-1;x>=1;x--){
                for(j=1;j<=x;j++){
                    printf("%d",j);
                }
                printf("\n");
            }
        }
    }
}