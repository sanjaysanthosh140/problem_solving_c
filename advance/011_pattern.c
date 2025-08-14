#include <stdio.h>
#include <stdlib.h>

int main(){
 int i,j,x,ilt=7,n=0;
 for(i=1;i<=ilt;i++){

    if(i%2!=0){
        for(j=ilt-i;j>=1;j--){
            printf(" ");
        }
        n++;
       // for(j=1;j<=i;j++){

          for(x=n;x<=i;x++){
                printf("%d ",x);
            
                 // else{
        //   
            // for(x=n;x>=n;x--){
                // printf("%d",x);
            // }
        //   

        // }
    }
      for(x=i-1;x>=n;x--){
      printf("%d ",x);
  }

    printf("\n");
// }

}
 }
}