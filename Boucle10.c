#include <stdio.h>
 int main(){
     int n1,n2,i,j,sum1=0,sum2=0;
     do{
        printf("Veuillez saisir deux entiers positifs:");
        scanf("%d\t%d",&n1,&n2);
     }while(n1<0&&n2<0);
     for(i=1;i<=n1;i++){
        if(n1%i==0){
            sum1 +=i;
        }
     }
     for(j=1;j<=n2;j++){
        if(n2%j==0){
            sum2 +=j;
        }
     }
     (sum2==sum1)? printf("%d et %d sont amicaux",n1,n2):printf("Ils sont pas amicaux");
    return 0;

 }
