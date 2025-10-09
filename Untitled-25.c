#include<stdio.h>
int main(){
    int n;
     printf("Enter a number: ");
    do{
       
         scanf("%d",&n);
         if(n!=0){
            printf("You entered:  %d\n",n);
        }
    }while(n!=0);
    printf("Programe finished because you entered 0 .....\n");
    return 0;
}