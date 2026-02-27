#include <stdio.h>
  int main(){

    int n,i,prd;
    n=-5;
    while(n<=0){
        printf("Veuillez saisir un entier positif:");
        scanf("%d",&n);
    }
    for(i=1;i<=10;i++){
        prd=n*i;
    printf("%d\t",prd);
    }


   return 0;
}
