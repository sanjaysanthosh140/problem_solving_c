#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,ilt=9;
    char arr[9]={'M','A', 'L', 'A', 'Y', 'A', 'L' ,'A', 'M' };
    for(i=1;i<=ilt-1;i++){
        for(j=0;j<i;j++){
            printf("%c",arr[j]);
        }
        printf("\n");
    }
}