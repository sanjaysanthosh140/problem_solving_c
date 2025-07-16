#include <stdio.h>
#include <stdlib.h>
int main(void){
//    printf("helo");
   int i,j,y,n=4,x,k;

   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    if(j==1||j==i){
        printf("*");
    }else{
        printf(" ");
    }

    }

    for(y=n-1;y>=1;y--){
       if(y==1||y==i){
        printf("*");
       }else{
        printf(" ");
       }
    }
    printf("\n");
    
    if(i==4){
         for(x=n-1;x>=1;x--){
            for(k=1;k<=n;k++){
                if(k==1||x==k){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            
            for(y=n-1;y>=1;y--){
                if(y==x||y==1){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}
return 0;
}
