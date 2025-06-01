#include <stdio.h>
#include <stdlib.h>
int main(void){
int i,y,value=13,a=0,k;
for(i=value;i>=1;i--){
    if(i%2==0){
        a+=1;
        for(k=0;k<a;k++){
            printf("*");
        }
        printf("\n");
    }else{
        for(y=0;y<i;y++){
            printf("*");
        }
        printf("\n");
    }
}
    return 0;
}