#include <stdio.h>
int main(){
    int n,i,sum;
    n=-5;
    sum=0;
        while(n<=0){
        printf("Veuillez saisr un  entier positif:");
        scanf("%d",&n);
        }
        for(i=1;i<=n;i++){
          if(i%2!=0){
            sum=sum+i;
          }
       }
       printf("%d",sum);
    return 0;
}

