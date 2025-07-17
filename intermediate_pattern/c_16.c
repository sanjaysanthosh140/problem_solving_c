#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i,j,k,n=12,x,y,f=10;
    for(i=1;i<=n;i++){
        if(i%2 !=0){
            for(x=n-i;x>=0;x--){
                  printf(" ");
            }
            for(j=1;j<=i;j++){
                if(j==1|| j==i){

                    printf("*");
                }else{
                    printf("  ");
                }
            }
            printf("\n");
        }
        if(i==12){
            for(y=1;y<=10;f--,y++){
                if(y%2==0){
                    for(j=1;j<=y;j++){
                        printf(" ");
                    }
                }
                
                    if(f%2 !=0){
                        for(x=1;x<=f;x++){
                            printf(" *");
                        }
                        printf("\n");
                    }
                
            }
        }

    }
    return 0;
}