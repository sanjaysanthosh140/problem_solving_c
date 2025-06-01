#include <stdio.h>
#include <stdlib.h>

int main(void){
   int i,j,a=0;
    char arr[] = {'a','B','c','D','e','F','g','H','i','J',
    'k','L','m','N','o'};
       for(i=1;i<=5;i++){
        for(j=0;j<i;a++,j++){
            printf("%c",arr[a]);
        }
        printf("\n");
       }
 return 0;
}