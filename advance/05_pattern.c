#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,j,x,ilt=5,num=1,sum=0,val;
    for(i=ilt;i>=1;i--){

        for(j=1;j<=i;j++){
            sum=sum+num;
             printf("%d ",sum);
        }
        sum=0;
        num++;
        printf("\n");
    }
}