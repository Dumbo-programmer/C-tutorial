#include <stdio.h>
#include <math.h>

int main(){

//This tutorial is written  for dev.to
//dev.to/dumboprogrammer   
 //This a comment
 /*
 This is a multiline
 comment*/

//print a string
//The printf() function is used to output values/print text:


    printf("Hello World!\n");
    //\n is a new line character
    //Variables

int myNum = 5;  // Integer (whole number)
float myFloatNum = 5.99; // Floating point number
char myLetter = 'D'; // Character
    
// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);    
  
  //conditions
//if
if (20 > 18) {
  printf("20 is greater than 18");
}
//if..else
int timee = 20;
if (timee < 18) {
  printf("Good day.");
} else {
  printf("Good evening.");
}
//else if
if (20 < 18) {
  // block of code to be executed if condition1 is true
} else if (20 == 18) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}
//Shorthand if
int time = 20;
(time < 18) ? printf("Good day.") : printf("Good evening.");
//switch
//int time = 20;
switch (time) {
  case 10:
    printf("Good morning.");
    break;
  case 18:
    printf("Good afternoon.");
    break;
  case 20:
    printf("Good evening.");
    break;
  default:
    printf("Good night.");
}                    
// Outputs "Good evening."

//while loop
int iw = 0;
while (iw < 10) {
    printf("%d\n", iw);
    iw++;
}
//for loop
for (int ir = 0; ir < 10; ir++) {
    printf("%d\n", ir);
}
//do while loop
int iq = 0;
do {
    printf("%d\n", iq);
    iq++;
} while (iq < 10);
//break
for (int ii = 0; ii < 10; ii++) {
    if (ii == 5) {
        break;
    }
    printf("%d\n", ii);
}
//array
int myNumbers[] = {25, 50, 75, 100};


for (int io = 0; io < 4; io++) {
  printf("%d\n", myNumbers[io]);
}

// Declare an array of four integers:
int ms[4];

// Add elements
ms[0] = 25;
ms[1] = 50;
ms[2] = 75;
ms[3] = 100;

//take user input in c
int userInput;
printf("Enter a number: ");
scanf("%d", &userInput);
printf("You entered: %d\n", userInput);

//memory address
int myAge = 43;
printf("%p", &myAge); // Outputs 0x7ffe5367e044

//pointers
int *myAgePointer = &myAge;
printf("%p\n", myAgePointer); // Outputs 0x7ffe5367e044


//call the add function
add(7, 8);
//outputs 15

//square root
double myNum = 25.0;
double mySqrt = sqrt(myNum);
printf("%f\n", mySqrt);
//ceil number

double myCeil = ceil(myNum);
printf("%f\n", myCeil); 
//round a number  
double myRound = round(myNum);
printf("%f\n", myRound);
//floor number
double myFloor = floor(myNum);
printf("%f\n", myFloor);
//absolute value
double myNumm = -25.0;
double myAbs = abs(myNumm);
printf("%f\n", myAbs);
//power
double myNumP = 2.0;
double myPower = pow(myNumP, 3);
printf("%f\n", myPower);
//modulus
double myNumf = 10.0;
double myMod = fmod(myNumf, 3);
printf("%f\n", myMod);
//random number
double myNumr = rand();
printf("%f\n", myNumr);



    //return a code
    return 0;
}
//create a function n c:
int add(int a, int b) {
    return a + b;
}