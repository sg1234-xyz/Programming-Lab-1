#include<stdio.h>
int main(){
	int age;
	printf("Enter age");
	scanf("%d",&age);
	switch(age>18){
		case1:
			printf("You are eligible");
			break;
			case0:
				printf("You are not eligible");
				break;
				default : printf("Invalid input");
				
					
				
	}
	return 0;
}