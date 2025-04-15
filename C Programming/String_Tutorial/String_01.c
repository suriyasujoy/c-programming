/* String tutorial */

#include<stdio.h>
void main(){
    // INITIALIZING STRINGS
    // char Name[]="Suriya Das";
    // printf("My name is %s",Name);

    // TAKING STRING INPUT FROM THE USER
    char Name[15];
    printf("Enter your name\n");

    // scanf("%s", Name); only reads a single word (it stops at spaces).
    // printf("Your name is %s",Name);

    // output
    // Enter your name
    // Suriya Das
    // Your name is Suriya

    // so we use fgets
    // syntax
    // fgets(variable_name, size_of_variable, input_source);

    fgets(Name, sizeof(Name), stdin);
    printf("Your name is %s",Name);
    // output
    // Enter your name
    // Suriya Das
    // Your name is Suriya Das

}

