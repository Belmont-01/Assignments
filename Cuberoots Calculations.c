//Calculating cuberoots using loops
#include<stdio.h>

int main(){
    int nterms;
    printf("Enter number of terms ");
    scanf("%d",&nterms);
    
    printf("For Loop\n");
    for (int m=1;m<=nterms;m++){
        printf("Number is:%d and cube of %d is :%d\n",m,m,m*m*m);
    }
    printf("\nWhile Loop\n");
    int n=1;
    while(n<=nterms){
        n++;
        printf("Number is:%d and cube of %d is :%d\n",n,n,n*n*n);
    }
    printf("\nDo-while Loop\n");
    int r=1;
    do{
        r++;
        printf("Number is:%d and cube of %d is %d\n",r,r,r*r*r);
    } while(r<=nterms);
    return 0;
}