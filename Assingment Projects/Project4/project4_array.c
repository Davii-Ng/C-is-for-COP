#include <stdio.h>

/*
Name: Minh Duong Nguyen
U-Number: U80322005

Descroption: This is a program a program that 
Compares elements of integers of arrays  a and b representing students in each club, 
and stores the elements in array c that are either in array a or in array b. 

Array c represents the students are in either debate club or ethics bowl. 
For example, if array a contains elements {1, 9, 3}, and array b contains elements {4, 3, 9, 6, 7}, array c should contain {1, 9, 3, 4, 6, 7}, all the distinct elements in the arrays a and b. 

Assume array a has n1 distinct elements and array b has n2 distinct elements. 
Array c has the length of n1 + n2. 
The function returns the actual number of elements in array c. 
There should NOT be any duplicated elements in c.

*/


int find_elements(int *a, int n1, int *b, int n2, int *c);

int main(){
    //Initialize variab;es
    int len1, len2;

    //Promptings
    printf("Enter the length of the first array: ");
    scanf("%d", &len1);

    int array1[len1];
    int *p1 = array1;

    printf("Enter elements in the first array: ");
    for (int i = 0; i < len1; i ++){
        scanf("%d", p1+i);
    }

    printf("Enter the length of the second array: ");
    scanf("%d", &len2);

    int array2[len2];
    int *p2 = array2;

    printf("Enter elements in the second array: ");
    for (int j = 0; j < len2; j++){
        scanf("%d", p2 + j);
    }


    int array3[len1+len2];
    int *c = array3;

    //Call the find_elements function
    int out = find_elements(p1, len1, p2, len2, c);


    //Output each element in array c
    printf("Output:");
    for(int k = 0; k < out; k++){
        printf(" %d",*(c + k));
    }
    printf("\n");
    return 0;
}



int find_elements(int *a, int n1, int *b, int n2, int *c){
    //Initialize pointers
    int *ptrA = a;
    int *ptrB = b;
    int *ptrC = c;

    //Copy array A to array C
    for (; ptrA < a + n1; ptrA++){
        *ptrC = *ptrA;
        ptrC++;
    }

    //Loop through every element of array B
    for (; ptrB < b + n2; ptrB++){
        int found = 0;  //flag for duplication

        //Loop through each element to check for duplication in array C
        for (int *checkPtr = c; checkPtr < ptrC; checkPtr++){
            if(*ptrB == *checkPtr){
                found = 1;
                break;
            }
        }

        //not duplicate => add into C
        if(!found){
            *ptrC = *ptrB;
            ptrC++;
        }
    }

    //return the length of array C, which equal to the displacement of ptrC to the passed in c pointer
    return ptrC - c;
}