//Consider a currency system in which there are notes of seven denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. Is a sum of Rs. N is entered through the keyboard.
// write a program to compute the smallest number of notes that will combine to give Rs. N.
#include <stdio.h>
int main(){
    int r,hundred=0 ,fifty=0,ten=0,five=0,two=0,one=0;
    printf("Enter the amount:");
    scanf("%d",&r);
    if(r>=100){
        hundred=r/100;
        r=r%100;
    }
    if(r>=50){
        fifty=r/50;
        r=r%50;
    }
    if(r>=10){
        ten=r/10;
        r=r%10;
    }
    if(r>=5){
        five=r/5;
        r=r%5;
    }
    if(r>=2){
        two=r/2;
        r=r%2;
    }
    if(r>=1){
        one=r;
    }
    printf("Rs 100=%d\n",hundred);
    printf("Rs 50=%d\n",fifty);
    printf("Rs 10=%d\n",ten);
    printf("Rs 5=%d\n",five);
    printf("Rs 2=%d\n",two);
    printf("Rs 1=%d",one);
    return (0);
}
// Enter the amount:1564
// Rs 100=15
// Rs 50=1
// Rs 10=1
// Rs 5=0
// Rs 2=2
// Rs 1=0