//If a five-digit number is input through the keyboard, write a program to print a new number by adding one to each of its digits.
#include <stdio.h>
int main(){
    int num,n=0,a=0;
    printf("Enter the five digit:");//12345
    scanf("%d",&num);
    while(num!=0){
        n=n*10+1;//0*10+1=1; 6*10+1=61 ;65*10+1=650+1=651; 
        n=num%10 +n;//12345%10+1=5+1=6; 1234%10+61=4+61=65 ; 123%10+651=3+651=654 ;

        num=num/10;//12345/10=1234; 1234/10=123 ;123/10=12
        //n=6,num=1234; 
        //n=65 ,num=123;
        //n=654 ,num=12;

    }//n=65432, num=0
    while(n!=0){
        a=a*10;//0*10=0; 20; 230;
        a=n%10 +a;//65432%10+0=2+0=2; 6543%10+1=3+20=23; 654%10+230=4+230=234
        n=n/10;//65432/10=6543; 6543/10=654; 654/10=65
        //a=2, n=6543
        //a=3 ,n=654
        //a=4 ,n=65
        //a=5 ,n=6
        //a=6 ,n=0
    }//a=23456 
    printf("After adding one number to each digit:%d",a);

}
// Enter the five digit:12345
// After adding one in each digit:23456