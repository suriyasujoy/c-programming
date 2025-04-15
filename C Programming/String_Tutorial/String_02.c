/* Take 5 name from user with their title and also print it using structure and function*/

// declaration of structure
struct Student_Name{
    char Name[20];
}S[5];


// function declaration
void Taking_name();
void Display_name();

// main function
#include<stdio.h>
void main(){
    Taking_name();
    Display_name();
}

// body of Taking_name() function
void Taking_name(){
    int i;
    for(i=0;i<5;i++){
        printf("Enter name of S[%d] :",i);
        fgets(S[i].Name,sizeof(S[i].Name),stdin);
    }
}

// body of Display_name() function
void Display_name(){
    int i;
    for(i=0;i<5;i++){
        printf("The name of S[%d] is %s\n",i,S[i].Name);
    }
}