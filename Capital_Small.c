#include<stdio.h>
int main()
{
    char letter;
    printf("Letter is: ");
    scanf("%c",&letter);

    if(letter>='a' && letter<='z')
        printf("small letter ");
    else if(letter>='A' && letter<='Z')
         printf("capital letter ");

    if(letter=='a' || letter=='e' || letter=='i' || letter=='o'|| letter=='u' ||
       letter=='A' || letter=='E' || letter=='I' || letter=='O'|| letter=='u')

       printf("& Vowel");

    else{
        printf("& Consonant");
    }

}

