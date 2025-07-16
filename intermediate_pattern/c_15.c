#include <stdio.h>
#include <stdlib.h>
int main(void){
 int i,j,n=4,a=1,x=10,f,y;
 for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
    printf("%d ",a*3);
        a++;
    }
    printf("\n");
}
    for(y=4;y>=1;y--){
    for(f=1;f<=y;f++){
        printf("%d ",x*7);
            x--;
        }
        printf("\n");
 }
}