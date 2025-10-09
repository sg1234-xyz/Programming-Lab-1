#include<stdio.h>
int main(){
    int n,digit,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    do{
        digit=n%10;
        sum=sum+digit;
        n=n/10;
       

    }while(n!=0);
      printf("The sum of digit of a number is =%d",sum);
    return 0;
}