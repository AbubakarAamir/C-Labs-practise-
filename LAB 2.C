//Made by :Abubakar Aamir
//              LAB 2 : PRACTISE C QUESTIONS :
// Q1: Write a c program that take two integars values as input from the user .Then swap the values taken from the user and displays the output of the variables?
#include<stdio.h>
int main(){
 //Declarations of a two integar  num1,num2.
 int num1,num2;
// Declaration a varaible for swapping.
 int temp;

 Printf("Enter the  first  number \n");
 scanf("%d",&num1); //Taking the first  number form the user:

 printf("Enter  the second number \n ");
 scanf("%d",&num2); //Taking the second number form the user:

 //Our values before swapping :
 printf("Our values before swapping \n:");
 printf("The first value is %d \n",num1);
 printf("The second values is %d \n",num2);

 //Swapping  method :
 temp = num1;  // Step 1: Store the value of num1 in temp
 num1 = num2;  // Step 2: Assign the value of num2 to num1
 num2 = temp;  //  Step 3: Assign the value of temp (which was originally num1) to num2

//After sawpping:
printf("After swapping\n");
printf("The first value is %d \n",num1);
printf("The second value is %d \n",num2);
    return 0;
}



//Output:
// Enter the first integar : 36
// Enter the second integar: 24
// After swap: 
// First integar: 24
// second integar: 36


//Q2: A customer ask the IT firm to develop a program in c language which can take tax rate and salary from the user on runtime 
//and then calculate the tax ,the user has to pay and the salary's he / she will have 
// after paying the tax .This information is then provided to the user?
#include<stdio.h>
int main(){

//Declaration of a vraiables for salary,taxRate,textAmount,salaryAfterTax:
float salary,taxRate,textAmount,salaryAfterTax;
// // Prompt the user to enter the tax rate:
printf("Enter the Tax Rate (in percentage ):\n");
scanf("%f",&taxRate);

 // Prompt the user to enter the salary:
printf("Enter the salary:\n");
scanf("%f",&salary);

// Calculate the tax amount:
textAmount = (taxRate/100)*salary;

// Calculate the salary after paying tax:
salaryAfterTax = salary - textAmount;

//Result:
printf("\nTax amount %.2f \n",textAmount);
printf("salary after tax %.2f \n",salaryAfterTax);

    return 0;
}

//Output:
// Enter tax rate in percentage :2
// Enter salary :25000

// Tax in Rs :500.00
// Net salary in Rs 24500.00

//Q3: A car traveled for some hours .The time car traveled  is taken at a runtime 
//of the program ,and it must not be negative and must be between one to five hours .
//The car had not traveled same distance in each hour . The distanace that the car covered must not be 
//negative .Write a c program that computes the average speed of the car in miles per hour
//:hint: the restictions can be displayed in the form of meesage on the window?
#include<stdio.h>
int main(){
// Declare variables to store time traveled, distance covered, total distance, and average speed:
int time,distance,total_distance = 0;
float average_speed;

    // Prompt the user to enter the time traveled:
printf("Enter the time traveled( between 1 to 5 hours\n): ");
scanf("%d",&time);

  // Check if time is within the specified range (1 to 5 hours)
if (time<1 || time>5)
{
    printf("Error:Please Enter the time between 1 to 5 hours\n:");
    return 1;  // Exit the program with error code 1:
}
  // Loop to input distances covered during each hour:
for (int i = 1; i <=time; i++)
{
      // Prompt the user to enter the distance covered in hour i:
    printf("Enter the distance covered in hour %d \n",i);
    scanf("%d",&distance);


if (distance<0)
{
    printf("Distance cannot be in negative.\n");
    return 1;}

     // Add the distance to the total distance:
    total_distance += distance;
}

 // Calculate the average speed:
average_speed = (float)total_distance/time;

  // Display the average speed:
    printf("\nAverage speed of the car: %.2f miles per hour\n",average_speed);

    return 0;
}


//Output:

// Enter time traveled by the car 1 to 5 hours :4
// Enter the distance traveled by the car in miles :25

// Average speed : 6.250000 miles per hour


//Q4: Explain the output of this program .Why the wrong value is being displayed in the output?
#include<stdio.h>
int main(){

int testIntegar = 3000000000;
    return 0;
}
//Reason:The varaible testIntegar is declared as a int ,which typically 
// represents a 32 bit integar on many systems .The value you assigned 3000000000,exceeds the maximium value that can be stored in a 32 bit signed integar (which is usually 2,147,483,647)



//Output:
// Number is : -1294967296



//Q5:Construct a c program with the flowchart below. The input valueof the principle must
//be between 100Rs to 1,000,000Rs the rate of interest must be between 5% to 10% and time period must be between 1 to 10 years .:hint:these restrictions 
//can be displayed in the form of meesage on the window?
#include <stdio.h>

int main() {
    // Declare variables to store principle, rate of interest, time period, and simple interest
    float principle, rate, time, simpleInterest;

    // Prompt the user to enter the principle
    printf("Enter the principle amount (between 100 Rs to 1,000,000 Rs):\n ");
    scanf("%f", &principle);

    // Check if principle is within the specified range
    if (principle < 100 || principle > 1000000) {
        printf("Error: Principle amount must be between 100 Rs to 1,000,000 Rs.\n");
        return 1; // Exit the program with error code 1
    }

    // Prompt the user to enter the rate of interest
    printf("Enter the rate of interest (between 5%% to 10%%): ");
    scanf("%f", &rate);

    // Check if rate of interest is within the specified range
    if (rate < 5 || rate > 10) {
        printf("Error: Rate of interest must be between 5%% to 10%%.\n");
        return 1; // Exit the program with error code 1
    }

    // Prompt the user to enter the time period
    printf("Enter the time period (in years, between 1 to 10): \n");
    scanf("%f", &time);

    // Check if time period is within the specified range
    if (time < 1 || time > 10) {
        printf("Error: Time period must be between 1 to 10 years.\n");
        return 1; // Exit the program with error code 1
    }

    // Calculate the simple interest
    simpleInterest = (principle * rate * time) / 100;

    // Display the calculated simple interest
    printf("\nSimple Interest: %.2f Rs\n", simpleInterest);

    return 0;
}


//Output:

// Principle value must be 100 to 1,000,000.
// Enter the value of the principle :
// 25000
// Rate of interest must be 5 to 10 percent .
// Enter rate of interest:
// 8
// Time period must be 1 to 10 years.
// Enter time period in years:
// 6

// simple interest rate = 12000.000
