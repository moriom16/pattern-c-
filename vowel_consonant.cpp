#include<stdio.h>
int main()
{
    char letter;
    printf("Enter letter: " );
    scanf("%ch",&letter);

/*

    if(letter=='a' || letter=='e' || letter=='i' || letter=='o'|| letter=='u' ||
       letter=='A' || letter=='E' || letter=='I' || letter=='O'|| letter=='u')

       printf("\nVowel");

    else{
        printf("\nConsonant");
    }

*/

//Using Switch

switch(letter)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
    printf("Vowel");
    break;

default:
    printf("Consonant");
}


}
