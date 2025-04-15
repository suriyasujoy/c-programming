// Take n int number and print it using DMA calloc

#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,n,*ptr;
    printf("Enter the value n :: ");
    scanf("%d",&n);

    // create a array using dynamic memory allocaton calloc
    ptr=(int *)calloc(n,sizeof(float));
    printf("Enter values :: \n");
    for(i=0;i<n;i++)
        scanf("%d",&ptr[i]);

    // display 
    for(i=0;i<n;i++)
        printf("%d\n",ptr[i]);


    // free()   it is used to delete memory which is allocated
    free(ptr);
    // printf("%d",ptr[0]);

    // output
//     Enter the value n :: 3
//     Enter values :: 
//     64
//     73
//     75
//     64
//     73
//     75
//     12200704

    printf("Enter the value of n again for realloc");
    scanf("%d",&n);

    realloc(ptr,n*sizeof(int)); // realloc used to create new array for previous deleted array
    for(i=0;i<n;i++)
        scanf("%d",&ptr[i]);

    // Display

    printf("The elements are :: ");
    for(i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }


    // output

    // Enter the value n :: 2
    // Enter values :: 
    // 1
    // 2
    // 1
    // 2
    // Enter the value of n again for realloc3
    // 64
    // 85
    // 84
    // The elements are :: 64
    // 85
    // 84
}