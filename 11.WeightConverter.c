#include <stdio.h>


int main(){


    int choice = 0;
    float pound = 0.0f;
    float kilogram = 0.0f;


    printf("Weight Conversion Calculator:\n");
    printf("1. Kilogram to pounds\n");
    printf("2. Pounds to kilogram\n");
    printf("Enter your choice (1 or 2): ");

    scanf("%d", &choice);

    if (choice == 1){
        printf("Enter the weight in kilograms:\n");
        scanf("%f", &kilogram);
        pound = kilogram * 2.20462;
        printf("%.2f pounds would be equal to %.2f pounds\n", kilogram, pound);
    }else if(choice == 2){
        printf("Enter the weight in pounds:\n");
        scanf("%f", &pound);
        kilogram = pound * 0.453592;
        printf("%.2f kilograms would be equal ro %.2f kilograms\n", pound, kilogram);
    }else{
        printf("Invalid input");
    }

    return 0;
}