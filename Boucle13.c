#include <stdio.h>
 int main(){
     int N,i,prd;
     do{
        printf("Veuillez saisir un entier positif:");
        scanf("%d",&N);
     }while(N<=0);
     for(i=1;i<=N;i++){
        prd=N*i;
        printf("%d\t",prd);
     }

    return 0;
 }
