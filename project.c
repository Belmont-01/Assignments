//C variables and data types
#include<stdio.h>//
int main(){
    //dec and initialization
    char a;
    char name[]={};
    int age;
    float area;
    double allowance;
    
    printf("Enter a character:");
    scanf("%c",&a);
    printf("The character is %c \n",a);
    
    printf("Enter name:");
    scanf("%s",&name);
    printf("The string is %s \n",name);
    
    printf("Enter age:");
    scanf("%d",&age);
    printf("The age is %d years \n",age);
    
    printf("Enter area:");
    scanf("%f",&area);
    printf("The area is %.2f \n",area);
    
    printf("Enter allowance:");
    scanf("%lf",&allowance);
    printf("The allowance is Kshs.%.2lf \n",allowance);

    
    
    
    
    return 0;
}