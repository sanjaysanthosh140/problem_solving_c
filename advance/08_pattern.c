#include <stdio.h>
#include <stdlib.h>

int main(){
   int i,j,x,ilt=7,od=0,ev=0,n=1;
   for(i=1;i<=ilt;i++){
    if(i%2!=0){
        for(j=1;j<=i;j++){
            if(j%2==0){
                printf("*");
            }else{
                printf("%d",n);
                
            }
        }
        printf("\n");
        n++;
        
    }

    if(i==ilt){
        
        for(x=ilt;x>=1;x--){
            if(x%2!=0){
                n--;
                for(j=1;j<=x;j++){
                    if(j%2==0){
                        printf("*");
                    }else{
                        printf("%d",n);
                    }

                }
                printf("\n");
               
            }
        }
    }
   }

}