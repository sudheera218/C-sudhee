#include <stdio.h>
int main(){
    int number;
// Input the number

printf("Enter a Number: ");
scanf("%d", &number);
// Read the number.
// check if the number is positive, negative, or zero.

if(number>0){
    printf(" The number %d is positive.\n", number);

}else if(number<0){
    printf(" The number %d is negative.\n", number);

}else{
    printf(" The number is Zero.\n");

}
return 0;
}
