#include <stdio.h>
#include <math.h>


int main(){
    const float PI = 3.14;
    double radius = 0.0;
    double area = 0.0;
    double circumference = 0.0;
    double volume = 0.0;


    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);

    
    area = PI * pow(radius, 2);
    circumference = 2 * radius * PI;
    volume = 4/3 * PI * pow(radius, 3);

    printf("The area is: %.2f\n", area);
    printf("The circumference is: %.2f\n", circumference);
    printf("The volume is: %.2f\n", volume);

    return 0;
}