//Made by :Abubakar Aamir

//              LAB 3 : PRACTISE C QUESTIONS :
 
 //Q1: Write a program that asks the user to enter two numbers ,obtains them from the user and prints their sum ,product, difference, quotient and remainder ?
#include <stdio.h>

int main() {
    // Declare variables to store the two numbers
    int num1, num2;

    // Prompt the user to enter the first number
    printf("Enter the first number:\n ");
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: \n");
    scanf("%d", &num2);

    // Calculate and print the sum
    printf("Sum = %d\n", num1 + num2);

    // Calculate and print the difference
    printf("Difference = %d\n", num1 - num2);

    // Calculate and print the product
    printf("Product = %d\n", num1 * num2);

    // Check if the second number is not zero before calculating quotient and remainder
    if (num2 != 0) {
        // Calculate and print the quotient
        printf("Quotient = %d\n", num1 / num2);

        // Calculate and print the remainder
        printf("Remainder = %d\n", num1 % num2);
    } else {
        // Print error message if the second number is zero
        printf("Error: Division by zero is undefined.\n");
    }

    return 0;
}


 //Output:
//  Enter the first number : 24
//  Enter the second number: 12
//  Sum = 36
//  differnce = 12 
//  Product = 288
//  Quotient = 2
//  REmainder = 0/


 //Q2: State the order of evaluation of the operators in each of the following C staements 
 //and show the value of x after eact staement is performed ?
//   (1): x = 7+3*6/2-1;   
//   (2): x = 2%2+2*2-2/2;
//   (3): x = (3*9*(3 + ((( 9*3/ )(3)))));

#include <stdio.h>

int main() {
    // Statement 1: x = 7 + 3 * 6 / 2 - 1;
    int x1;
    x1 = 7 + 3 * 6 / 2 - 1;
    printf("(1) x = %d\n", x1);

    // Statement 2: x = 2 % 2 + 2 * 2 - 2 / 2;
    int x2;
    x2 = 2 % 2 + 2 * 2 - 2 / 2;
    printf("(2) x = %d\n", x2);

    // Statement 3: x = (3 * 9 * (3 + ((( 9 * 3 / )(3)))));
    int x3;
    x3 = (3 * 9 * (3 + ((( 9 * 3 ) / (3)))));
    printf("(3) x = %d\n", x3);

    return 0;
}
//Output:
// In first statement the value of x = 15
// In second statement the value of x = 3
// In third satement the value of x = 324

//Q3: Write a c program that finds the result of the following operations you are allowed to intialize any values .observe and write in comment how that operation produce results?
// (a): 5+ 4
// (b): 10/2
// (c):True or false 
// (d):20 MOD 3
// (e):5<8
// (f):25 MOD 70
// (g): "A"> "H"
// (h):NOT true 
// (i):25/70
// (j): false and true 
// (k):20*0.5
// (l):35<=35 

#include <stdio.h>

int main() {
    // (a): 5 + 4
    int result_a = 5 + 4; // Adds 5 and 4 together
    printf("(a) Result: %d\n", result_a);

    // (b): 10 / 2
    int result_b = 10 / 2; // Divides 10 by 2
    printf("(b) Result: %d\n", result_b);

    // (c): True or false
    int result_c = 1 || 0; // Logical OR operation between true (1) and false (0)
    printf("(c) Result: %d\n", result_c);

    // (d): 20 MOD 3
    int result_d = 20 % 3; // Modulus operation, returns the remainder of dividing 20 by 3
    printf("(d) Result: %d\n", result_d);

    // (e): 5 < 8
    int result_e = 5 < 8; // Comparison operation, checks if 5 is less than 8
    printf("(e) Result: %d\n", result_e);

    // (f): 25 MOD 70
    int result_f = 25 % 70; // Modulus operation, returns the remainder of dividing 25 by 70
    printf("(f) Result: %d\n", result_f);

    // (g): "A" > "H"
    int result_g = 'A' > 'H'; // Comparison operation, compares ASCII values of 'A' and 'H'
    printf("(g) Result: %d\n", result_g);

    // (h): NOT true
    int result_h = !1; // Logical NOT operation, negates the value of true (1)
    printf("(h) Result: %d\n", result_h);

    // (i): 25 / 70
    int result_i = 25 / 70; // Integer division, truncates the result to an integer
    printf("(i) Result: %d\n", result_i);

    // (j): false AND true
    int result_j = 0 && 1; // Logical AND operation between false (0) and true (1)
    printf("(j) Result: %d\n", result_j);

    // (k): 20 * 0.5
    float result_k = 20 * 0.5; // Multiplication of an integer and a float, result is a float
    printf("(k) Result: %.1f\n", result_k);

    // (l): 35 <= 35
    int result_l = 35 <= 35; // Comparison operation, checks if 35 is less than or equal to 35
    printf("(l) Result: %d\n", result_l);

    return 0;
}



//Output:
// 5 + 4 = 9 
// 10/2 = 5
// True or Falsa = 1
// 20 MOD 3 = 2
// 5<8 = 1
// 25 MOD 70 = 25
// "A" >"H" = 0
// NOT true = 0
// 25 / 70 = 0
// False and true = 0
// 20 *0.5 = 10.00
// 35<= 35 = 1

//Q4: Write a c pr0gram to create a BMI calculator application that reads the user weight in pounds and height in inches (or ,if you prefer the user  weight in khilograms and height in metres) then calculates and displays the user body mass index .hint:BMI = kg/m^ ?
#include <stdio.h>

int main() {
    float weight_kg, height_m, bmi;

    // Prompt the user to enter weight in kilograms
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight_kg);

    // Prompt the user to enter height in meters
    printf("Enter your height in meters: ");
    scanf("%f", &height_m);

    // Calculate BMI using the formula: BMI = weight / (height * height)
    bmi = weight_kg / (height_m * height_m);

    // Display the calculated BMI
    printf("Your Body Mass Index (BMI) is: %.2f\n", bmi);

    return 0;
}



//Output:
// Enter the weight of the body in pounds:600
// Enter the height of the body in inches:8
// BMI is = 0.108 kg/m^2 


//Q5: Write a c program for swapping two numbers without using a third variable .Ask the user to enter the two numbers?
#include <stdio.h>

int main() {
    int num1, num2;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the numbers before swapping
    printf("\nBefore swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    // Swapping without using a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    // Display the numbers after swapping
    printf("\nAfter swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}

//Output:
// Enter first number : 63
// Enter the second number : 25
// After swapping:
// First number: 25
// Second number:63