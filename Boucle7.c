#include <stdio.h>
  int main(){
      int n,i,cmpt;
      cmpt=0;
      do{
        printf("Veuillez saisir un entier positif:");
        scanf("%d",&n);
      }while(n<=0);
      for(i=1;i<=n;i++){
        if(n%i==0&&n!=1){
            cmpt=cmpt+1;
        }
      }
      if(cmpt>2){
        printf("le nombre est composite");
      }else{
        printf("Le nombre n'est pas composite");
      }
    return 0;
  }
