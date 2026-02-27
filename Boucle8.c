#include <stdio.h>
int main(){
    int i,n,sum=0;
    do{
        printf("Veuillez saisir un entier positif:");
        scanf("%d",&n);
    }while(n<=0);
    for(i=1;i<=n-1;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    (sum==n) ? printf("%d est parfait",n):printf("%d est  non parfait",n);
    return 0;

}
