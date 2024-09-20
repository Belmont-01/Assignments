//Simple interest
#include<stdio.h>
int main(){
    int principal_amount,time,rate,simple_interest;
    printf("Enter principal amount ");
    scanf("%d",&principal_amount);
    
    printf("Enter time ");
    scanf("%d",&time);
    
    printf("Enter rate ");
    scanf("%d",&rate);
    
    simple_interest=(principal_amount*time*rate)/100;
    printf("The simple interest is %d",simple_interest);
    
    
    return 0;
}