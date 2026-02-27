#include <stdio.h>
int main(){
    int n,i;
    do{
        printf("Veuillez saisir un entier positif:");
        scanf("%d",&n);
    }while(n<=0);
    for(i=1;i<=10;i++){
        printf("%d\t",n+i);
    }

    return 0;

}
