#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,x,ilt=10,n=0;
    for(i=1;i<=ilt;i++){
        if(i%2!=0){
            for(j=1;j<=i;j++){
                if(j==1||j==i){
                    printf("%d",1);
                }else{

                    if(j%2!=1){
                        printf(" ");

                    }else if(j!=i){
                     if(i==9){
                        if(j==5){
                            printf("%d",n+2);
                    }else{
                        printf("%d",n);
                    }  
                       
                       
                    }else{
                        printf("%d",n);
                       }
                        
                    }
                }
            }
            printf("\n");
            n++;
        }else{
            printf("\n");
        }
    }

}