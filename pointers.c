#include <stdio.h>


void myFunction() {
  printf("I just got executed in the main function!\n");
}

void calculateSum() {
  int x = 10;
  int y = 5;

  int sum = x + y;

  printf("The sum of x and y is: %d\n", sum);
}

/*
  
  If we consider the "Calculate the Sum of Numbers" example from the previous function, 
  we can make a more sustainable program by using function parameters:

*/
void calculateSum2(int x, int y) {

  int sum = x + y;
  printf("The sum of %d + %d is: %d\n", x, y, sum);
}


void welcomeFunction(char name[]) {

  printf("Hello %s\n", name);
}

/*
Notes on Parameters
Note that when you are working with multiple parameters, 
the function call must have the same number of arguments as there are parameters, 
and the arguments must be passed in the same order.

*/


/*

Pass Arrays as Function Parameters
You can also pass arrays to a function:

*/

void myFunction2(int myNums[5]) {

  for (int i = 0; i < 5; i++) {
    printf("%d\n", myNums[i]);
  }
}

/*
The function (myFunction) takes an array as its parameter (int myNumbers[5]), and loops through the array elements with the for loop.
When the function is called inside main(), we pass along the myNumbers array, which outputs the array elements.
Note that when you call the function, you only need to use the name of the array when passing it as an argument myFunction(myNumbers). 
However, the full declaration of the array is needed in the function parameter (int myNumbers[5]).
*/

/*
Return Values
The void keyword, used in the previous examples, indicates that the function should not return a value. 
If you want the function to return a value, 
you can use a data type (such as int or float, etc.) instead of void, and use the return keyword inside the function:

*/

int myFunction3(int x) {

  return 5 + x;
}

/*
This example returns the sum of a function with two parameters:
*/

int myFunction4(int x, int y) {
  return x + y;
}

/*
If we consider the "Calculate the Sum of Numbers" example one more time, 
we can use return instead and store the results in different variables. 
This will make the program even more flexible and easier to control:
*/

int calculateSum3(int x, int y) {
  return x + y;
}

// If you have many "result variables", it is better to store the results in an array:

int calculateSum4(int x, int y) {

  return x + y;
}

int calculateSum5(int x, int y) {

  return x + y;
}

/*

Real-Life Example
To demonstrate a practical example of using functions, 
let's create a program that converts a value from fahrenheit to celsius:

*/

float toCelcius(float fahrenheit) {
  return (5.0 / 9.0) * (fahrenheit - 32.0);

}

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


/*

Create a Function
To create (often referred to as declare) your own function, 
specify the name of the function, 
followed by parentheses () and curly brackets {}:

Syntax
void myFunction() {
  // code to be executed
}
*/
  myFunction();
  calculateSum();
  welcomeFunction("Mohamed");
  welcomeFunction("Ali");
  welcomeFunction("Hassan");
  calculateSum2(143, 167);
  calculateSum2(1500, 1800);
  int myNums[5] = {10, 20, 30, 40, 50};
  myFunction2(myNums);

  /*
  When a parameter is passed to the function, it is called an argument. 
  So, from the example above: name is a parameter, while Mohamed, Ali and Hassan are arguments.
  */

  printf("The result of myFunction3() is: %d\n", myFunction3(3));

  printf("Result of myFunction4() is: %d\n", myFunction4(5, 3));


  int result1 = calculateSum3(5, 3);
  int result2 = calculateSum3(8, 2);
  int result3 = calculateSum3(15, 15);

  printf("Result1 is: %d\n", result1);
  printf("Result2 is: %d\n", result2);
  printf("Result3 is: %d\n", result3);

  /*
  Tip: If you have many "result variables", 
  it is better to store the results in an array:
  */

  // Create an array
  int resultArr[6];
  int resultArray2[5];

  // Call the function with different arguments and store the results in the array

  resultArr[0] = calculateSum4(5, 3);
  resultArr[1] = calculateSum4(8, 2);
  resultArr[2] = calculateSum4(15, 15);
  resultArr[3] = calculateSum4(9, 1);
  resultArr[4] = calculateSum4(7, 7);
  resultArr[5] = calculateSum4(1, 1);

for (int i = 0; i < 6; i++) {
  printf("Result%d is = %d\n", i + 1, resultArr[i]);
}


// Create an array2
  
  int resultarray2[5];
  
  // Call the function with different arguments and store the different results in the array
  
  resultArray2[0] = calculateSum5(20, 30);
  resultArray2[1] = calculateSum5(15, 16);
  resultArray2[2] = calculateSum5(18, 22);
  resultArray2[3] = calculateSum5(21, 36);
  resultArray2[4] = calculateSum5(100, 120);
  
  for (int i = 0; i < 5; i++) {
  	printf("Result%d is = %d\n", i + 1, resultArray2[i]);
  
  }
  

  // Set a fahrenheit value

  float f_value = 98.8;

  //Call the function with the fahrenheit value

  float resultat = toCelcius(f_value);

  // Print the fahrenheit value

  printf("Fahrenheit: %.2f\n", f_value);

  
  return 0;
}