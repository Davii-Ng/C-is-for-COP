#include <stdio.h>

/*
Name: Minh Duong Nguyen
U-Number: U80322005

Description:
Write a program that adds the first and last elements of an integer array 
and store it as the first element of the output array, 
adds the second and second-to-last elements and stored as the second number, and so on.

If the array has an odd number of integers, 
leave the central integer in the original array unchanged and copy it to the output array as the last element.

Approach: Two-pointers
*/

void compute(int *a1, int n1, int *a2, int n2);

int main(){
    //Initialize the length of the original array
    int len1;

    //Prompt and get value
    printf("Enter the length of the array: ");
    scanf("%d",&len1);

    //Initialize array and pointer
    int in_array[len1];
    int *p1 = in_array;

    //Take in elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < len1; i++){
        scanf("%d", p1 + i);
    }

    //Initialize second array
    int len2 = (len1+1)/2;
    int out_array[len2];
    int *p2 = out_array;

    //Call function
    compute(p1, len1, p2, len2);

    //Output result
    printf("Output: ");
    for (int j = 0 ; j < len2; j++ ){
        printf("%d ", *(p2 + j));
    }
}


void compute(int *a1, int n1, int *a2, int n2){
    //Initilize pointers
    int *leftptr = a1;
    int *rightptr = a1 + (n1 - 1);
    int *ptr2 = a2;

    //Loop until the left pointer crosses the mid point of the array or left pointer and right pointer points at the same value
    while(leftptr < rightptr){
        //Preform addition and insert into the out put array
        *ptr2 = *leftptr + *rightptr;

        ptr2++;
        leftptr++;
        rightptr--;
    }

    //Edgecase for odd array lengths where the middle value remain the same
    if (leftptr == rightptr){
        *ptr2 = *leftptr;
    }
}