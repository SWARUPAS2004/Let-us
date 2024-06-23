// if a four digit number is input through the keyboard write a program to obtain the sum of the first and last digit of this number
#include <stdio.h>
int main() {
    int sum=0,num,a,b,c;
    printf("Enter the 4 digit number:");//1234
    scanf("%d",&num);
    a=num%10;//1234%10=4
    b=num/10;//1234/10=123
    c=b/100;//123/100=1
    sum=a+c;//4+1=5
    printf("Sum of 1st and last digit %d",sum);//5
    
    return 0;
}