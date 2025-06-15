#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i,j,k,f,v=3,x=1;
    for(i=1;i<=v;i++){

        for(j=0;j<i;j++){
            printf("%d",i);
            printf("\n");
        }
           for(f=0;f<=i;x++,f++){
             printf("%d",x);
             
           }
           printf("\n");
    }
}