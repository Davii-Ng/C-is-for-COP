#include <stdio.h>

// Name: Minh Duong Nguyen
// U80322005

/*
This is a C program that reads a stream of characters one at a time, until a # is entered to terminate
For each characters in the stream, we check for the classes of the characters
If the character is in lowercase, we convert it to uppercase and vice versa
Otherwise print No conversion done

Quick explaination of the program:

The outer while loop check for # for terminate the program
The inner loop checks for # for \n to indicate the end of a character stream
While in the character stream: check ASCII value for each character and display appropriate output for each case
*/

int main(){
    char ch; // Declare input char

    //Outer Loop
    do{
        // Prompting the user
        printf("Enter 1 or more characters then ENTER:\n");
        printf("(NOTE: a character # will exit the program):\n");


        //Inner Loop
        do{
            ch = getchar();
            if (ch == '\n' || ch == '#') continue; // End of character stream
            printf("\nYou typed: '%c' (ASCII %d)\n", ch, ch);
            if (ch >= 65 && ch <= 90){  //Uppercase Letter
                printf("Class: Uppercase Letter\n");
                printf("Converted to: '%c'\n", ch + 32);
            }else if (ch >= 97 && ch <= 122){   //Lowercase Letter
                printf("Class: Lowercase Letter\n");
                printf("Converted to: '%c'\n", ch - 32);
            }else if (ch >= 48 && ch <= 57){    //Digits
                printf("Class: Digit\n");
                printf("No conversion done");
            }else if (ch >= 32 && ch <= 126){   //Printable Symbols
                printf("Class: Printable Symbol\n");
                printf("No conversion done");
            }else if (ch < 32 || ch > 126){     //Non-printables
                printf("Class: Non-printable or extended ASCII\n");
                printf("No conversion done");
            }
        }while (ch != '\n' && ch != '#');
        //End of Inner Loop


        if(ch != '#'){      //for formatting
            printf("\n");
        }
    }while(ch != '#');
    //End of Outer Loop
    
    return 0;
}