// A pointer variable in c is used to store memory address of another variable
// & is used to obtain the address of a variable and (asterik)* sign is used to declare pointer var
#include<stdio.h>
void main(){
    int a,*p;   // allways remember that var and pointer var are same data type
    p=&a;
    a=4;
    printf("%d\n",*p);    // means that value that store in p address and p refers an address
    printf("%u",p);     // means that the address that store in p
}