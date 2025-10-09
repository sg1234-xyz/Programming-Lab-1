#include<stdio.h>
#include<math.h>
int main(){
    int num,original,temp,digit,n=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    original=num;
    temp=num;
    do{
        n++;
        temp=temp/10;
    }while(temp!=0);
    temp=num;
    do{
        digit=temp%10;
        sum=sum+pow(digit,n);
        temp=temp/10;
    }while(temp!=0);
    if(sum==original){
        printf("%d is an Armstromg number\n",original);

    }else{
        printf("%d is not an Armstromg number\n",original);
    }
    return 0;
}