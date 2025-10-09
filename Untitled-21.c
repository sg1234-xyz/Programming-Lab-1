#include<stdio.h>
int main(){
    int n,digit,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    do{
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;

    }while(n!=0);
    printf("reversed number is %d",rev);
    return 0;
}