//temperature of city in fahrenheit degrees is input through the keyboard.
// write a program to calculate this temperature into centigrade degrees.
#include <stdio.h>
#include <conio.h>
int main(){
    float f,c;
    printf("Enter Temperature in fahrenheit: ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("The temperature in centigrade degree:%2f",c);
    return (0);

}
// Enter Temperature in fahrenheit: 40
// The temperature in centigrade degree:4.444445