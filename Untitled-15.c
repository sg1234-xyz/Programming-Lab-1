#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter a first number: ");
    scanf("%d",&a);
    printf("Enter a second number: ");
    scanf("%d",&b);
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
printf("GDC =%d\n",a);
    return 0;
}