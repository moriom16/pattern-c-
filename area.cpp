#include<stdio.h>
int main()
{
    int choice;
    double r,area,length,height;

    printf("1. Area of triangle: \n");
    printf("2. Area of rectangle: \n");
    printf("3. Area of circle: \n");

    printf("Enter your choice: \n");
    scanf("%d",&choice);

    switch(choice)
    {
   case 1:
    {
        printf("Enter Length & Height: ");
    scanf("%lf %lf",&length,&height);
    area=0.5*length*height;
    printf("Triangle area is: %.2lf",area);
        break;
    }

   case 2:
    {
        printf("Enter Length & Height: ");
    scanf("%lf %lf",&length,&height);
    area=length*height;
    printf("Rectangle area is: %.2lf",area);
        break;
    }

   case 3:
    {
        printf("Enter Radius: ");
    scanf("%lf",&r);
    area=3.1416*r*r;
    printf("Circle area is: %.2lf",area);
        break;
    }

   default:
    printf("Invalid");
    }
}
