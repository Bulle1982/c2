#include <stdio.h>

int main() {
  int myAge = 43;  // An int variable
  int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge
  
  int yearsOfExperience = 50;
  int* ptr2 = &yearsOfExperience;

  // Output the value of myAge (43)
  printf("%d\n", myAge);
  printf("%d\n", yearsOfExperience);

  // Output the memory address of myAge (0x7ffe5367e044)
  printf("%p\n", &myAge);
  printf("%p\n", &yearsOfExperience);

  // Output the memory address of myAge with the pointer (0x7ffe5367e044)
  printf("%p\n", ptr);
  printf("%p\n", ptr2);


  // Dereference: Output the value of myAge with the pointer (43)
  printf("%d\n", *ptr);
  printf("%d\n", *ptr2);
/*
Note that the * sign can be confusing here, as it does two different things in our code:
When used in declaration (int* ptr), it creates a pointer variable.
When not used in declaration, it act as a dereference operator.

Good To Know: There are two ways to declare pointer variables in C:

int* myNum;
int *myNum;

*/

/*
  Pointers & Arrays
You can also use pointers to access arrays.

Consider the following array of integers:
*/
int myNumbers[] = {25, 50, 75, 100};
// You learned from the arrays chapter that you can loop through the array elements with a for loop:

int i;

for (i = 0; i < 4; i++) {

  printf("%d\n", myNumbers[i]);
}

//Instead of printing the value of each array element, let's print the memory address of each array element:

int x;

for (x = 0; x < 4; x++) {

  printf("%p\n", &myNumbers[x]);
}

// It is because the size of an int type is typically 4 bytes, remember:

int myInt;
printf("%lu\n", sizeof(myInt));

int myNumbers2[4] = {25, 50, 75, 100};
// Get the size of the myNumbers array
printf("%lu\n", sizeof(myNumbers2));

// How Are Pointers Related to Arrays?
// Well, in C, the name of an array, is actually a pointer to the first element of the array.

int myNumbers3[4] = {25, 50, 75, 100};
// Get the memory address of the myNumbers array
printf("%p\n", myNumbers3);

// Get the memory address of the first array element

printf("%p\n", &myNumbers3[0]);

// This basically means that we can work with arrays through pointers!

// Since myNumbers is a pointer to the first element in myNumbers, you can use the * operator to access it:

int myNumbers4[4] = {25, 50, 75, 100};
printf("%d\n", *myNumbers4);

// To access the rest of the elements in myNumbers, you can increment the pointer/array (+1, +2, etc):

// // Get the value of the second element in myNumbers

printf("%d\n", *(myNumbers4 + 1));

// Get the value of the third element in myNumbers
printf("%d\n", *(myNumbers4 +2));

// Get the value of the fourth element in myNumbers
printf("%d\n", *(myNumbers4 +3));

// Or loop through it:


int *ptr3 = myNumbers4;
int j;

for (j = 0; j < 4; j++) {
  printf("%d\n", *(ptr3 + j));
}

// It is also possible to change the value of array elements with pointers:

*myNumbers4 = 13;

// Change the value of the second element to 17
*(myNumbers4 + 1) = 17;

// Change the value of the third element to 90
*(myNumbers4 + 2) = 90;

// Change the value of the fourth element to 43
*(myNumbers4 +3) = 43;

printf("%d\n", *myNumbers4);
printf("%d\n", *(myNumbers4 + 1));
printf("%d\n", *(myNumbers4 + 2));
printf("%d\n", *(myNumbers4 + 3));

  return 0;
}