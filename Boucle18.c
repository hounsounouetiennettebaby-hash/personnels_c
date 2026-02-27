#include <stdio.h>
 int main(){
     int N,X,i,sum=0;
     do{
        printf("Veuillez entrer le nombre d'entiers que vous voulez saisir:");
        scanf("%d",&N);
     }while(N<=0);
     for(i=1;i<=N;i++){
        do{
        printf("Veuillez un entier divisible par 5:");
        scanf("%d",&X);
        }while(X%5!=0);
        if(X==0){
            break;
        }
        if(X%3==0){
            sum+=X;
        }
     }
     printf("La somme de ceux qui sont multiple de 3 est %d",sum);
    return 0;
 }
