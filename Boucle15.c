#include <stdio.h>
 int main(){
     int N,i,j,sum,prd=1;
     do{
        printf("Veuillez saisir un entier positif:");
        scanf("%d",&N);
     }while(N<=0);
     for(i=1;i<=N/2;i++){
            sum=0;
        for(j=1;j<=i-1;j++){
            if(i%j==0){
                sum +=j;
            }
        }
        if(sum==i){
            prd=prd*i;
        }

        printf("%d",prd);

     }

