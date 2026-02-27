#include <stdio.h>
#include<stdlib.h>
 int main(){
   int a,b,i,j,cpt1=0,cpt2=0;
   do{
    printf("Veuillez saisir deux entiers positifs:");
    scanf("%d %d",&a,&b);
   }while(a<=0||b<=0);
   for(i=1;i<=a;i++){
    if(a%i==0){
        ++cpt1;
    }
   }
   for(j=1;j<=b;j++){
     if(b%j==0){
        ++cpt2;
     }
   }
   (cpt1==2&&cpt2==2&&abs(b-a)==2)?printf("Les deux nombres sont premiers jumeaux"):printf("Non premiers jumeaux");
    return 0;
 }
