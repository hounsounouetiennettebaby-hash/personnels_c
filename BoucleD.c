#include <stdio.h>
 int main(){
     int n,cpt,i;
     do{
        printf("Veuillez saisir un entier positif:");
        scanf("%d",&n);
     }while(n<=0);
     cpt=0;
      do{
        ++n;
        for(i=1;i<=n;i++){
            if(n%i==0){
                ++cpt;
            }
        }
     } while(cpt!=2);
        printf("le premier nombre entier après l'entier saisir est:%d",n);
    return 0;
 }
