#include <stdio.h>
 int main(){
     int N,i,cpt,sum=0,j,cpt1=0;
     float div;
     do{
        printf("Veuillez saisir un entier positif:");
        scanf("%d",&N);
     }while(N<=0);
    for(i=1;i<=N;i++){
            cpt=0;
        if(N%i==0){
            sum+=i;
        }
        if(sum+N==2*N){
            for(j=1;j<=i;j++){
                if(i%j==0){
                   cpt++;
                }
             if(cpt==2){
                cpt1++;
             }
            }
        }

    }
     div=(float)N/cpt1;
     printf("La division entre N et le nombre de nombres premiers est %.2f",div);
    return 0;

 }
