// Volume and Surface Area
#include <stdio.h>
int main() {
    float radius,height,volume,surface_area;
    printf("Enter radius ");
    scanf("%f",&radius);
    
    printf("Enter height ");
    scanf("%f",&height);
    
    volume=3.1426*radius*radius*height;
    printf("The volume of the cylinder is %.4f \n",volume);
    
    surface_area=2*3.1426*radius*radius+ 2*3.1426*radius*height;
    printf("The surface area of the cylinder is %.4f",surface_area);
    
    
    return 0;
}