#include<stdio.h>
int main(){
    float num1,num2;
    int choice;
   printf("........MENU........\n");
   printf("1. Addition....\n");
   printf("2. Substraction.....\n");
   printf("3. Multiplication......\n");
   printf("4. Division........\n");
   printf("5. Exit......\n");
   printf("Enter choice: ");
   scanf("%d",&choice);

   if(choice>=1 && choice<=4){
     printf("Enter first number: ");
    scanf("%f",&num1);
    printf("Enter another number: ");
    scanf("%f",&num2);
   }
   switch(choice){
    case 1: {
        printf("%f + %f =%0.2f",num1,num2,(num1+num2));
        break;
    }
    case 2: {
        printf("%f - %f = %0.2f",num1,num2,(num1-num2));
        break;
    }
    case 3: {
        printf("%f x %f = %0.2f",num1,num2,(num1*num2));
        break;
    }
    case 4: {
        if(num2!=0){
            printf("%f / %f =%0.2f",num1,num2,(num1/num2));
        }else{
            printf("Error! divion by zero....\n");
        }
        break;
    }
    case 5: {
        printf("...Exiting program....\n");
        break;
    }
    default: {
        printf("please enter the right choice....\n");
    }
   }
    return 0;
}