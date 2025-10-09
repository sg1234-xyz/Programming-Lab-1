#include<stdio.h>
#include<math.h>
int main(){
    float red,length,width,s,a,b,c ;//s is half-perimeter; a,b,c is the length of a triangle
    int choice;
    printf("     ...Menu...    \n");
    printf("  1.Area of a Circle\n");
    printf("  2.Area of a Rectangle\n");
    printf("  3.Area of a Triangle\n");
    printf("  4.Exit..,\n");
    printf("Enter choice(1-4): ");
    scanf("%d",&choice);
    if(choice==1){
        printf("Enter redius: ");
        scanf("%f",&red);
    }else if(choice==2){
        printf("Enter length: ");
        scanf("%f",&length);
        printf("Enter width: ");
        scanf("%f",&width);
    }else if (choice==3){
        printf("Enter a: ");
        scanf("%f",&a);
        printf("Enter b: ");
        scanf("%f",&b);
        printf("Enter c: ");
        scanf("%f",&c);
    }
    switch(choice){
        case 1: {
            printf("Area of a circle = %0.2f",(3.14*red*red));
            break;
        }
        case 2: {
            printf("Area of a rectangle = %0.2f",(length*width));
            break;
        }
        case 3: {
            s=(a+b+c)/2;
            float area;
            area=sqrt(s*(s-a)*(s-b)*(s-c));
            printf("Area of a Triangle = %0.2f",area);
            break;
        }
        case 4: {
            printf("Exiting program.......");
            break;
        }
        default: {
            printf("please enter the right choice......\n");
        }
    }    
    return 0;
}
