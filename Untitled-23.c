#include<stdio.h>
int main(){
    int n,digit,rev=0,original;
    printf("Enter a number: ");
    scanf("%d",&n);
    original=n;
    do{
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;

    }while(n!=0);
    if(original==rev){
        printf("this number is pallindrome");
    }else{
        printf("this number is not pallindrome");
    }
    return 0;
}