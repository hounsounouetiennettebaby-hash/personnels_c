#include <stdio.h>
 int main(){
    int N,i,j,sum,cpt1,cpt2=0;
    float moy;
    do{
        printf("Veuillez saisir un entier positif:");
        scanf("%d",&N);
    }while(N<=0);
    for(i=1;i<=N;i++){
            cpt1=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                ++cpt1;
            }
        }
      if(cpt1>2){
        ++cpt2;
        sum+=i;
      }
    }
    moy=(float) sum/cpt2;
    printf("La moyenne des nombres composites est %.2f",moy);
    return 0;
}
