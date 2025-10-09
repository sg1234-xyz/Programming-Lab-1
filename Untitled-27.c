#include<stdio.h>
int main(){
    int a=0,b=1,next,i=1,n;
    printf("Enter n: ");
    scanf("%d",&n);
    do{
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
        i++;
    }while(i<=n);
    
    return 0;
}