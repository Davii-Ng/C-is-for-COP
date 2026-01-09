#include <stdio.h>

int main(){
    

    char choice = '\0';
    float celsius = 0.0f;
    float farenheit = 0.0f;


    printf("Temperature Converstion Porgram\n");
    printf("C. Celsius to Farenheit\n");
    printf("F. Farenheit to Celsius\n");
    printf("Is the temperature is in Celsius (C) or in Farenheit(F)?: ");

    scanf("%c", &choice);

    if (choice == 'C'){
        printf("Enter the temperature in Celsius (C): ");
        scanf("%f", &celsius);
        farenheit = celsius * 1.8 + 32;
        printf("%.2f celsius would be equivalent to %.2f farenheit", celsius, farenheit);
    }else if (choice == 'F'){
        printf("Enter the temperature in Farenheit (F): ");
        scanf("%f", &farenheit);
        celsius = (farenheit - 32) / 1.8;
        printf("%.2f farenheit would be equivalent to %.2f celsius", farenheit, celsius);
    }



    return 0;
}