/* Structure pointer */
struct Book{
    char name[15];
    char author[20];
    float price;
};
#include<stdio.h>
void main(){
    struct Book B1,*ptr;
    ptr=&B1;
    printf("Enter the name of Book :: ");
    fgets(ptr->name,sizeof(ptr->name),stdin);
    printf("Enter the author of Book :: ");
    fgets(ptr->author,sizeof(ptr->author),stdin);
    printf("Enter the price of Book :: ");
    scanf("%f",&ptr->price);


    // Display 

    printf("The name of Book is %s",ptr->name);
    printf("The author of Book is %s",ptr->author);
    printf("The price of Book is %.2f",ptr->price);

}