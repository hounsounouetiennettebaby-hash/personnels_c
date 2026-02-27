#include <stdio.h>
 int main(){
     int n,cpt=0,x=5,sum,j;
     do{
        printf("Veuillez saisir un entier positif:");
        scanf("%d",&n);
     }while(n<=0);
     do{

        do{
            ++x;
            sum=0;
            for(j=1;j<=x-1;j++){
                if(x%j==0){
                    sum=sum+j;
                }
            }

          if(sum==x){
        printf("%d\t",x);
          ++cpt;
          }
        }while(sum<x);

     }while(cpt<n);
    return 0;
 }
