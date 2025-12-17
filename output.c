#include <stdio.h>
#include <string.h>

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";


    printf("Enter your age: ");
    scanf("%d", &age);



    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);   
    // Note the space before %c to consume any leftover newline character



    printf("Enter your name: ");
    // scanf("%s", name); // Reads a string until the first whitespace
    getchar(); // Consume the leftover newline character from previous input
    fgets(name, sizeof(name), stdin); // Reads a line of text including spaces
    name[strlen(name) - 1] = '\0'; // Remove the trailing newline character


    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}