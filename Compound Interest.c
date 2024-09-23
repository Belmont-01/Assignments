//Compound interest
#include<stdio.h>
#include<math.h>

int main(){
    float principal_amount,rate,time,amount,compound_interest;
    printf("Enter principal amount ");
    scanf("%f",&principal_amount);
    
    printf("Enter rate ");
    scanf("%f",&rate);
    
    printf("Enter time ");
    scanf("%f",&time);
    
    amount=principal_amount*pow((1+rate/100),time);
    compound_interest=amount-principal_amount;
    printf("The compound interest is %.2f",compound_interest);
    
    
    return 0;
}