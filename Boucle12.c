#include <stdio.h>
int main(){
 int N,sum=0,prd=1,i;
    do{
       printf("Veuillez saisir un entier positif:");
       scanf("%d",&N);
    }while(N<=0);
    for(i=1;i<=N;i++){
        if(i%3==0){
            sum=sum+i;
        }
        if(i%2==0&&i%5==0){
            prd=prd*i;
        }
    }
    printf("la somme des nombres divisibles par 3 compris entre 1et N est %d\n et le produit des nombres pairs divisibles apr 5 sont %d:",sum,prd);
    return 0;
}
