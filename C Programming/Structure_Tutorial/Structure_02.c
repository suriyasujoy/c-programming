#include<stdio.h>
void main(){
    struct Address{
        char Vill[40];
        char Name[15];
        int ID;
    }P1;
    struct Address P2;

    // take input for P1
    printf("Enter vill of P1 :: ");
    fgets(P1.Vill,sizeof(P1.Vill),stdin);
    printf("Enter name of P1 :: ");
    fgets(P1.Name,sizeof(P1.Name),stdin);
    printf("Enter ID of P1 :: ");
    scanf("%d",&P1.ID);
    
    // fgets() and scanf() — input gets skipped due to leftover newline characters (\n) in the buffer.

    getchar(); // Clear newline after scanf

    // That means when use fgets after scanf use getchar() to clear newline after scanf


    // take input for P2
    printf("Enter vill of P2 :: ");
    fgets(P2.Vill,sizeof(P2.Vill),stdin);
    printf("Enter name of P2 :: ");
    fgets(P2.Name,sizeof(P2.Name),stdin);
    printf("Enter ID of P2 :: ");
    scanf("%d",&P2.ID);


    // Display

    printf("Vill of P1 is %s\n",P1.Vill);
    printf("Name of P1 is %s\n",P1.Name);
    printf("ID of P1 is %d\n",P1.ID);
    
    
    printf("Vill of P2 is %s\n",P2.Vill);
    printf("Name of P2 is %s\n",P2.Name);
    printf("ID of P2 is %d\n",P2.ID);
}
