# include <stdio.h>
int main()
{
    int N,j,i,sum,s=0;
    float pct;
    do
    {
        printf("Veuillez saisir un entier positif:");
        scanf("%d",&N);
    }while(N<=0);
    for(i=1; i<=N; i++){
        j=0;
        sum=0;
        do{
            j++;
            sum +=j;
        }while(sum<i);
        if(sum==i){
            s++;
        }
    }
    pct=(s*100)/N;
    printf("%d",s);
    printf("Le pourcentage des nombres triangulaires est %.2f",pct);
    return 0;

}
