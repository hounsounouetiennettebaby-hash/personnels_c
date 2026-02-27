#include <stdio.h>
 int main(){
    int n,s,i=0;
     s=0;
     n=0;
     while(n<=0){
        printf("Veuillez saisir un entier positif:");
        scanf("%d",&n);
     }
        do{
            ++i;
          s +=i;
        }while(s<n);
     if(s==n){
        printf("Triangulaire");
    }else{
       printf("Non triangulaire");
    }
    return 0;
 }
