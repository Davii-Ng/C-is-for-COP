#include <stdio.h>
#include <string.h>


int main(){
    
    char item[50] = "";
    int quantity = 0;
    float price = 0.0f;
    char currency = '$';
    float total = 0.0f;


    printf("What item would you like to purchase? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item)-1] = '\0'; //Remove newline character

    printf("What is the price for each? ");
    scanf("%f", &price);


    printf("How many would you like to buy? ");
    scanf("%d", &quantity);


    total = price * quantity;


    printf("\nYou have bought %d %s\n", quantity, item);
    printf("%c%.2f", currency, total);
    return 0;
}