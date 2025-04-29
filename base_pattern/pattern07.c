#include <stdio.h>
#include <stdio.h>

int main(void){
int i,j,k,n=4;
for(i=-n;i<=n;i++){
    if(i<0){
        k=-i;
    }else{
      k=i;
    }

    for(j=k;j<n;j++){
        printf(" ");
    }

    for(j=0;j<k+1;j++){
        printf("* ");
    }
    printf("\n");
}
}