#include <stdio.h>

/*
Name: Minh Duong Nguyen
U-Number: U80322005

Description: This is a continuation project from project 1 AC rental. 

A quick debrief is the program outputs the charge of rental based on the model and days they rent.
This is just the project 1 but instead of using variables, I use arrays to store rental values.
There not much different from project 1, in fact, I copy pasted the everything from project from the switch case onwards.
*/

int main(){
    //Declaring variables
    int choice, first_day, daily_rate, per_week, days, week, charge, remainder;

    //Declaring arrays
    int first_day_arr[4] = {50, 60, 80, 200};
    int daily_rate_arr[4] = {30, 35, 50, 120};
    int per_week_arr[4] = {160, 200, 280, 550};


    //Prompt for AC selection
    printf("Please select from four types of AC: 1, 2, 3, and 4\n");
    printf("Enter selection:");
    scanf("%d", &choice);


    //AC selection
    switch(choice){
        case 1:
            first_day = first_day_arr[0];
            daily_rate = daily_rate_arr[0];
            per_week = per_week_arr[0];
            break;
        case 2:
            first_day = first_day_arr[1];
            daily_rate = daily_rate_arr[1];
            per_week = per_week_arr[1];
            break;
        case 3:
            first_day = first_day_arr[2];
            daily_rate = daily_rate_arr[2];
            per_week = per_week_arr[2];
            break;
        case 4:
            first_day = first_day_arr[3];
            daily_rate = daily_rate_arr[3];
            per_week = per_week_arr[3];
            break;
        
        //Invalid AC selection that is not 1-4
        default:
            printf("Invalid selection. Select from 1 to 4.\n");
            return 0;
    
    }


    //Prompt for days
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
        if(charge > per_week){ // Condition to check edge case where paying the max rate is cheaper 
            charge = per_week;
        }
    }else{
        week = days / 7;
        remainder = days % 7;
        if(remainder * daily_rate < per_week){ // Comparing between daily rate vs max_per_week
            charge = daily_rate * remainder + per_week * week;
        }else{
            charge = per_week * (week + 1);
        }
    }
      

    //Output final bill;
    printf("Charge($): %d", charge);
    

    return 0;
}