#include <stdio.h>
 int main (){
     int n,i,j,prd;
     do{
        printf("Veuillez saisir un entier positif:");
        scanf("%d",&n);
     }while(n<=0);
     for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            prd=i*j;
        printf("%d\t",prd);
        }
     }


    return 0;

 }
