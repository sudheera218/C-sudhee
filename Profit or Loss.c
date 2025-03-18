#include<stdio.h>
int main()
{
    float costPrice, sellingPrice, Result;
    // Input the cost price and selling price
    printf("Enter the cost Price: ");
    scanf("%f", &costPrice);
    printf("Enter the selling Price: ");
    scanf("%f", &sellingPrice);
    // SP>CP
    // Result=SP-CP
    // Calculate Profit or Loss
    if(sellingPrice > costPrice){
        Result= sellingPrice-costPrice;
        printf("Profit: %2f\n", Result);

    }else if (sellingPrice< costPrice)
    {
        Result=costPrice-sellingPrice;
        printf("Loss: %2f\n", Result);

    }else {
        printf("No Profit, No Loss. \n");

    }

}