// **********Reading a file using files IO OPERATIONS:*************

#include<stdio.h>  //header file which they carry our functions in libiray.
int main(){ 

FILE *ptr=NULL;  // Sab se phele FILE pointer banakar usko null krdo..
 char string[34]; //Here we created a string .
 ptr = fopen("file.txt","r");//fopen() function is used to open the file
 //We open our file in readmode(r),and aslo we can open in writemode(w)and also on appendmode(a)

fscanf(ptr, "%s",string);
printf("The content of this file has %s\n",string);

                                   

    return 0;
}

//******************Writing a file using files IO operations:*****************

#include<stdio.h>
int main(){

FILE *Ptr =NULL;
char string[84]= "Mamma kiya dekh arhe ho app magic ha yeh";
Ptr = fopen("file.txt","w");
fprintf(Ptr ,"%s" , string);

    return 0;
}


//******************Appending a file using files IO operations:*****************

#include<stdio.h>
int main(){

FILE *ptr = NULL;
char string[55]= "Assalam alikum bhai kese ha aap logg?";
ptr = fopen("file.txt","a");
fprintf(ptr,"%s",string);

    return 0;
}
//Important points:
//(1):when we open file in append mode (a).its add the content from the previous content.
//(2):When we open file in write mode (w).its write the content from the new.
//(3):When we open file in read mode (r).its only content you read .
