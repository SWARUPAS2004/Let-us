//the distance between two cities in km is input through the keyboard
//write a program to convert and print this distance in metres , feet, inches and centimeters
#include <stdio.h>
int main()
{
    float km,m,cm,feet,inch;
    printf("The distance between two cities in km is:");
    scanf("%f",&km);
    m=km*1000;
    cm=km*1000 *100;
    feet=km*3280.84;
    inch=km*39370.1;
    printf("The distance in Meter:%2f\n",m);
    printf("The distance in Centrimeter:%2f\n",cm);
    printf("The distance in Feet:%2f\n",feet);
    printf("The distance in Inch:%2f\n",inch);

    return (0);
}
// The distance between two cities in km is:2
// The distance in Meter:2000.000000
// The distance in Centrimeter:200000.000000
// The distance in Feet:6561.680176
// The distance in Inch:78740.203125