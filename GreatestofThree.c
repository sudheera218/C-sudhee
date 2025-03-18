#include <stdio.h>
//Greatest of the given three numbers.
int main(){
    int number1, number2, number3, Greatest;
    //input three numbers using printf and scanf
    printf("Enter the first number:");
    scanf("%d",&number1);
    printf("Enter the second number:");
    scanf("%d",&number2);
    printf("Enter the third number:");
    scanf("%d",&number3);


// Algorithm
// Read the number1, number2, number3, Greatest;
// Compare numbers using if else

    if(number1 > number2){
        if(number1>number3){
            Greatest= number1;
        }else {
            Greatest= number3;

        }
    }else {
        if(number2>number3) {
            Greatest= number2;
        }
        else{
            Greatest= number3;

        }
    }
    // Output of the Greatest number among three numbers
    printf("The Greatest Number is: %d\n",Greatest);
    return 0;






}
