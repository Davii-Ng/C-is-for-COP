#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
/*
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);


    if (age >= 65){
        printf("You are a senior. \n");
    }
    else if (age >= 18){
        printf("You are an adult. \n");
    }
    else if(age < 0){
        printf("You haven't been born yet. \n");
    }
    else if(age == 0){
        printf("You are a newborn\n");
    }
    else{
        printf("You are a child. \n");
    }




------------EXAMPLE 2------------


    bool isStudent = true;

    if(isStudent){
        printf("You are a student.\n");
    }else{
        printf("You are not a student.\n");
    }


------------EXAMPLE 3------------
*/
    char name[50] = "";



    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // Remove the newline character from the input


    if(strlen(name) == 0){
        printf("You did not enter your name, \n");
    }else{
        printf("Hello %s",name );
    }


    return 0;
}