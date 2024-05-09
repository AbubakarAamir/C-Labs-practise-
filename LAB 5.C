//Made by :Abubakar Aamir

//              LAB 5 : PRACTISE C QUESTIONS :
//Q1: You must have seen the question before deleting anything like "Are you sure to delete[Y\y] /[N/n]"?
//Create  a program that ask for this question if user enterd Y or y it prints "Deleted successfully".If the user enters N or n it prints "Deleting cancelled "
//otherwise it prints chosen the right option  using the switch satement?
#include<stdio.h>
#include<stdlib.h>
int main(){

char user_input;
printf("Are you sure to delete [Y/y],[N/n]:");
scanf("%s",&user_input);

switch (user_input)
{
case 'Y':
  printf("Delete successfully....");
case 'y':
printf("Delete successfully....... ");
  break;
  case 'N':
  printf("Detete process  Cancelled successfully ..... ");
  case 'n':
  printf("Deltete process  cancelled successfully");

default:
printf("Please choose the right option ");
  break;
}

  return 0;
}


//Output:
// Are you sure to delete [Y/y] / [N/n] ? N 
// Delete cancelled


//  Operation       White coffee           Black coffee
    //  pure water            15 min             20 min  
    //  sugar                 15 min              20 min 
    //  mix well              20 min              25 min 
    //  add coffee             2 min              15 min 
    //  add milk               4 min               15 min 
    //  mix well               20 min              25 min
    //Q2: Write a program to control a coffee machine .Aloow the user to input the type 
    // of coffe asa B for black and W for white .ask the user if the cup size is double and if the coffee is manual . The Following table details the time chart for the machine for each coffee type .Dsiplay a statement  
    // for each step .I fthe coffee size is double increase the baking time  50 
    //percent .use funtions to display in structions to the user and to compute the coffee time?

#include<stdio.h>
#include<stdlib.h> //Header files  of the program.

// using function to display the instructions for the user.
void display_instructions(char coffeetype,char isdouble,char ismanual){

  printf("Coffee machine instructions:\n");
  printf("Place the cup:\n");
  printf("Add coffee ground:\n");

  double Brewingtime = 0.5;
if (isdouble=='Y'||isdouble=='y') 
{
  Brewingtime*=1.5;
}
if (ismanual=='Y'||ismanual=='y')
{
  Brewingtime*=1.2; 
}

if (coffeetype=='W'||coffeetype=='w')
{
  Brewingtime+=2.0;
}

printf("Start brewing for %.2f mintues\n ",Brewingtime);



}
int main(){
char coffeetype,ismanual,isdouble;

printf("Enter the coffee type:[W/B]\n");
scanf("%c",&coffeetype);

printf("If the cupe size is double:[Y/N]\n");
scanf("%c",&isdouble);

printf("Is the coffee is manual:[Y/N]\n");
scanf("%c",&ismanual);

display_instructions(coffeetype,isdouble,ismanual);//Here we call our function which we in upper.

printf("Enjoy your coffee :)");

  return 0;
}

    //Output:
    // Enter Coffee type (B/W) :B 
    // Is the cup size duouble ? (Y/N) : Y
    // Is the coffee is manual ? (Y/N) : Y
    // Coffee machine instructions :
    // 1: Place the cup .
    // 2: add coffee grounds.
    // 3: start brewing for 9.00 minutes.
    // 4: Enjoy your coffee 


  //Q3:   Write a c program in which users enters his NTS and F.sc marks and your program
  // will help student in selection of university .based on these marks students will be allocated a saet at different department of different university?

#include<stdio.h>
#include<stdlib.h>
int main(){

int Ntsmarks,Fscmarks;
printf("Enter your NTS marks for university criteria:\n");
scanf("%d",&Ntsmarks);

printf("Enter your Fsc marks for university criteria :\n");
scanf("%d",&Fscmarks);

if (Ntsmarks>=70 && Fscmarks>=80)
{
  printf("Congratulations :You are eligible for computer science at Karachi university:\n");

}
else if (Ntsmarks>=60 &&Fscmarks>=70)
{
   printf("Congratulations :You are eligible for Electrical engeering at Fast university:\n");
}
else if (Ntsmarks>=50 &&Fscmarks>=60)
{
   printf("Congratulations :You are eligible for Busniness Administration  at Lums university:\n");
}
else{
  printf("Sorry you did not match the meet the eligible criteria for any university\n");
}



  return 0;
}



  //Ouput:
//   Enter NTS marks :75
//   Enter F.sc marks :86
//   Congratulations ! you are eligible for computer science at karachi university
     

     //Q4: Using IF and SWICTH  statement ,write a program that displays the following menu for the food items 
     // available to take order form the customer :
    //  B = burger (Rs 200) ,F = French fries (Rs 50)
    //  P = pizza (Rs 500) , S = sandwich (Rs 150)
    //  The customer can order any combination of avaliable food. the program first
    //  ask to enter the no types of snacks example: 2 , 3 ,4 then it ask to entered
    //  the choice example: B for burger  and then for quantity .The program should finally display the total charges for the order
#include<stdio.h>
#include<stdio.h>
int main(){

char choice;
int quantity,numtype;
double totalcharges=0.0;
printf("***********MENU*****************\n");
printf("B = Burger \t RS:(200)\n");
printf("F = French fries \t RS:(50)\n");
printf("P = Pizza \t RS:(500)\n");
printf("S = Sandwich \t RS:(150)\n");

printf("Enter the number of snacks:(2,3,4)\n");
scanf("%d",&numtype);

for (int i = 0; i < numtype; i++)
{
  printf("Enter choice for snack (B/P/F/S)\n",i);
  scanf("%s",&choice);

  printf("Enter quantity for snack \n",i);
  scanf("%d",&quantity);

  switch (choice)
  {
  case 'B':
  case 'b':
   totalcharges+=quantity*200.0;
    break;
  case 'P':
  case 'p':
   totalcharges+=quantity*500.0;
    break;

  case 'F':
  case 'f':
   totalcharges+=quantity*50.0;
    break;

 case 'S':
  case 's':
   totalcharges+=quantity*150.0;
    break;
  
  default:
  printf("Wrong choice : Please enter(B/F/P/S)\n");
  i--;
    break;
  }

}


printf("\nThe total charges for the order :Rs:%.2f\n",totalcharges);

  return 0;
}





//Output:
// Menu:
// B = burder    (Rs 200)
// F = French    (Rs 50)
// P = pizza     (RS 500)
// S = sandwich   (150)
// Enter the numbers of types  of snacks (2,3 or 4) :2
// Enter choice for snack 1  (B / F / P /S) :F 
// Enter quantity for snack 1 :2
// Enter choice for snack 2 (B / F /P /S) :S 
// Enter the quantity for snack 2 : 3 

// Total charges for the order :Rs 550.00

