
#include <stdio.h>
 int main(){
     int N,i,j,cpt;
     N=0;
     while(N<=0){
        printf("Veuillez saisir un entier positif :");
        scanf("%d",&N);
     }
     for(i=1;i<=N;i++){
            cpt=0;
        for(j=1;j<=N;j++){
            if(i%j==0){
                ++cpt;
            }

        }
        if(cpt==2){
            printf("%d\t",i);
        }
     }

    return 0;

 }
