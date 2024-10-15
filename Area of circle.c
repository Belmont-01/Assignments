#include<stdio.h>
float Calculatearea(float r){
    return 3.1426*r*r;
}
int main(){
    float area,r;
    printf("Enter radius: ");
    scanf("%f",&r);
    
    area=Calculatearea(r);
    
    printf("The area of the circle is %.2f\n",area);
    
    
    
    return 0;
}