#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,ilt=7,a=1,x=0;
    char arr[4]={'A','B','C','D'};
     
    for(i=1;i<=ilt;i++){
        if(i%2==0){
            for(j=1;j<=i;j++){
                printf("%d ",a);

            }
            a++;
            printf("\n");
        }else{
            for(j=1;j<=i;j++){
                printf("%c ",arr[x]);

            }
            x++;
            printf("\n");
        }
    }
}