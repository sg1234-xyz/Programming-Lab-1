#include<stdio.h>
int main(){
    float num1,num2,result;
    int choice;
    do{
        printf("\n======: simple calculator :======\n");
        printf("1. Addition........\n");
        printf("2. Sustraction........\n");
        printf("3. Multiplication.........\n");
        printf("4. Dvision........\n");
        printf("5. Exit......\n");
        printf("Enter your chooice(1-5): ");
        scanf("%d",&choice);

        if(choice>=1 && choice<=4){
            printf("Enter a number: ");
            scanf("%f",&num2);
            printf("Enter another number: ");
            scanf("%f",&num2);
        }

        switch(choice){
            case 1: {
                result = num1 +num2;
                printf("Result = %0.2f\n",result);
                break;
            }
            case 2: {
                result = num1-num2;
                printf("Result = %0.2f\n",result);
                break;
            }
            case 3: {
                result = num1*num2;
                printf("Result = %0.2f\n",result);
                break;
            }
            case 4: {
                if(num2!=0){
                    result=num1/num2;
                    printf("Result = %0.2f\n",result);
                }else{
                    printf("Error! Division by zero...\n");
                }
                break;
            }
            case 5:{
                printf("Exiting calculator..........\n");
                break;
            }
            default: {
                printf("...Invalid choice! try again....\n");
            }
        }
    }while(choice!=0);
    return 0;
}