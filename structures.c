#include <stdio.h>
#include <math.h>
#include <string.h>


// Create a Structure
// You can create a structure by using the struct keyword and declare each of its members inside curly braces:

struct myStructure { // Structure declaration
    int myNum; // Member (int variable)
    char myLetter; // Member (char variable)
    // You can use the strcpy() function and assign the value to s1.myString, like this:
    char myString[30]; // String
}; // End the structure with a semicolon

/*
To access the structure, you must create a variable of it.

Use the struct keyword inside the main() method, followed by the name of the structure and then the name of the structure variable:

Create a struct variable with the name "s1":

*/

// To access members of a structure, use the dot syntax (.):


/*
Simpler Syntax
You can also assign values to members of a structure variable at declaration time, in a single line.
Just insert the values in a comma-separated list inside curly braces {}. 
Note that you don't have to use the strcpy() function for string values with this technique:
*/

/*
                            *Copy Structures*

You can also assign one structure to another.

In the following example, the values of s1 are copied to s2:


struct myStructure s1 = {13, 'B', "Some text"};
struct myStructure s2;

s2 = s1;
*/

// Create a structure

struct myStructure2 {

    int myNum2;
    char myLetter2;
    char myString2[30];
};

int main() {
    
    // Create a structure variable of myStructure called s1
    struct myStructure s1;
    struct myStructure s2;
    struct myStructure s3;
    struct myStructure2 s4 = {43, 'C', "I am string two"};

    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';
    strcpy(s3.myString, "I am a string");

    // Print values

    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    

    // Now you can easily create multiple structure variables with different values, using just one structure:

    s2.myNum = 20;
    s2.myLetter = 'M';

    printf("My number: %d\n", s2.myNum);
    printf("My letter: %c\n", s2.myLetter);
    printf("My string: %s\n", s3.myString);
    printf("%d %c %s\n", s4.myNum2, s4.myLetter2, s4.myString2);
    // Note: The order of the inserted values must match the order of the variable types declared in the structure (13 for int, 'B' for char, etc).
    return 0;
}