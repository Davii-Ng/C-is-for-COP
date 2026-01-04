#include <stdio.h>
#include <math.h>

int main(){

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;


    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);
    printf("Enter the number of years: ");
    scanf("%d", &years);
    printf("Enter the number of times the interest is compounded per year: ");
    scanf("%d", &timesCompounded);
    total = principal * pow((1 + (rate / 100) / timesCompounded), timesCompounded * years);
    printf("The total amount after %d years is: %.2f\n", years, total);

    return 0;
}