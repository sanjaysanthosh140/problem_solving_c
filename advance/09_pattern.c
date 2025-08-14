#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,ilt=5,x;

    for(i=1;i<=ilt;i++){
        for(x=ilt-i;x>=1;x--){
            printf(" ");
        }

        for(j=1;j<=i;j++){

            if(j==1||j==i){
                printf("* ");
            }else{
                printf("  ");
            }

        }
        printf("\n");

        if(i==ilt){
            int f;
            int a;
            for(j=ilt-1;j>=1;j--){
                for(a=ilt-j;a>=1;a--){
                    printf(" ");
                }

                for(f=1;f<=j;f++){
                    if(f==1||f==j){
                        printf("* ");
                    }else{
                        printf("  ");
                    }
                }
                printf("\n");
            }
        }
    }
}