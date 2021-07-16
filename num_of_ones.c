#include <stdio.h>
int main(){
    int number,rem,one=0;
    printf("\nEnter a number : ");
    scanf("%d",&number);
    for(int i=0;i<8;i++)
    {
        rem=number%10;
        if(rem==1){one++;}
        number/=10;
    }
    printf("\n%d is number of ones in given number\n",one);
}