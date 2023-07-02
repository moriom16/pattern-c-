#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedtemp;

    printf("1. Celsius to Fahrenheit: \n");
    printf("2. Fahrenheit to Celsius: \n");
    printf("Enter your choice: \n");
    scanf("%d",&choice);

    switch(choice)
{
case 1:
    {
        printf("enter Celsius temperature: ");
        scanf("%d",&temp);
        convertedtemp=(1.8*temp)+32;
        printf("Temp in Fahrenheit is: %f\n",convertedtemp);
        break;
    }

case 2:
    {
        printf("enter Fahrenheit temperature: ");
        scanf("%d",&temp);
        convertedtemp=(temp-32)*1.8;
        printf("Temp in Celsius is: %f\n",convertedtemp);
        break;
    }

default:
    printf("Invalid Input");
}

}
