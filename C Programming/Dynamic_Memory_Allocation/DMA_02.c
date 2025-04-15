// Take n float number and print it using DMA malloc

#include<stdio.h>
#include<stdlib.h>  // to use malloc and calloc
void main(){
    int i;
    float n,*ptr;

    printf("Enter the value of n :: ");
    scanf("%f",&n);

    // create a array size of n using DMA

    ptr=(float *)malloc(n*sizeof(float));

    for(i=0;i<n;i++){
        scanf("%f",&ptr[i]);
    }

    // Display
    printf("The result is \n");
    for(i=0;i<n;i++)
        printf("%.2f\n",ptr[i]);
}