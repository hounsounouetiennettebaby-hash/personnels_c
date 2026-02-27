#include <stdio.h>
int main(){
    int n,i,prd;
    prd=1;
    n=0;
    while(n<=0){
        printf("Veuillez entrer un nombre positif:");
        scanf("%d",&n);
    }
    for(i=n;i>=1;i--){
            prd=prd*i;
    }
    printf("%d",prd);
    return 0;
}
