#include <stdio.h>

//Minh Duong Nguyen U80322005
/*

This is a C program that calculates the cost for a AC rental. 
The program prompts the user to input the selection, the number of days the equipment is needed.

*/


int main(){


    // Variables
    int selection = 0; // Use for AC selection
    int days = 0;      // Rental date
    int charge = 0;    // Final rent charge
    int first_day = 0; // Store first day prices
    int daily_rate = 0;  // Store rate for everyday after the first day
    int max_per_week = 0;   //Store maximum rate per week
    int remainder = 0;      // A variiable used to compare between daily rates and maximum rate
    int week = 0;       //Counts the number of weeks rent


    //Prompt for AC selection
    printf("Please select from four types of AC: 1, 2, 3, and 4\n");
    printf("Enter selection:");
    scanf("%d", &selection);


    //AC selection
    switch(selection){
        case 1:
            first_day = 50;
            daily_rate = 30;
            max_per_week = 160;
            break;

        case 2:
            first_day = 60;
            daily_rate = 35;
            max_per_week = 200;
            break;
        case 3:
            first_day = 85;
            daily_rate = 50;
            max_per_week = 280;
            break;

        case 4:
            first_day = 200;
            daily_rate = 120;
            max_per_week = 550;
            break;

        //Invalid AC selection that is not 1-4
        default:
            printf("Invalid selection. Select from 1 to 4.\n");
            return 0;
    }



    // Prompt user for rent days
    printf("Enter days:");
    scanf("%d", &days);

    // Edge case for invalid rental date
    if(days < 0){
        printf("Invalid days.");
        return 0;
    }

    // if the rental duration is less than a week
    if(days <= 7){
        charge = first_day + (days - 1) * (daily_rate); 
        if(charge > max_per_week){ // Condition to check edge case where paying the max rate is cheaper 
            charge = max_per_week;
        }
    }else{
        week = days / 7;
        remainder = days % 7;
        if(remainder * daily_rate < max_per_week){ // Comparing between daily rate vs max_per_week
            charge = daily_rate * remainder + max_per_week * week;
        }else{
            charge = max_per_week * (week + 1);
        }
    }
      

    //Output final bill;
    printf("Charge($): %d", charge);



    return 0;
}