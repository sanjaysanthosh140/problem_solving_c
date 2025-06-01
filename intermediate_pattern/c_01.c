#include <stdio.h>
#include <stdlib.h>
int main(void){
int j,i,x,k,value=4;

for(i=1;i<=value;i++){
     if(i==1){
        printf("*\n");  // optional
     }
    for(j=1;j<=i;j++){
        
        for(k=0;k<i;k++){
            printf("*");
        }
        printf("\n");
    }

    for(x=1;x<=i*3;x++){
        if(x%2==0){
            printf("$");
        }else{
            printf("*");
        }
    }
    printf("\n");
}

return 0;

}