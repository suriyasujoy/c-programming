// Structure is a user define data tyoe in c


// syntax of Structure

// struct Structure_name{
//     data_type var 1
//     data_type var 2
//     data_type var 3
//     data_type var 4
// }Structure_var;

// Example

struct Structure_01
{
    char Name[15];
    int roll;
}S1;

#include<stdio.h>
#include <string.h>
void main(){
    struct Structure_01 S2; // procedure to declare a structure var in function
    // S1.Name="Suriya das"; // This is Wrong way you can only initialize at the time of 
    // declaration


    // example
    char name[20];
    // char name="Suriya das"; // wrong
    strcpy(name, "Hello"); // correct


    strcpy(S1.Name, "Suriya Das");  // This is correct way 
    S1.roll = 1;

    printf("Enter a name :: ");
    fgets(S2.Name,sizeof(S2.Name),stdin);
    printf("Enter his roll :: ");
    scanf("%d",&S2.roll);

    // display

    printf("The name of S1 is %s and roll is %d\n",S1.Name,S1.roll);
    printf("The name of S2 is %s and roll is %d\n",S2.Name,S2.roll);

}
