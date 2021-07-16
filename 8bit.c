#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ones(char k[],int len){
    int num=0;
    for(int i=0;i<len;i++){
        k[i]=='1' && num++;
    }
    system("cls");
    len!=8 ? printf("\nOutput\nThe given number is not 8bit (%d is the given size)\nTry again",len) : printf("\nOutput\n%d is the number 1's in the number",num);
}
int main(){
   char k[50];
   int count=0,limit;
   printf("Enter a limit of test cases : ");
   scanf("%d",&limit);
   while(1){
   count++;
   printf("\nEnter a Input\nEnter a 8bit number : ");
   scanf("%s",&k);
   int length=strlen(k);
   if(count==limit){
       break;
   }
   ones(k,length);
  }
}
