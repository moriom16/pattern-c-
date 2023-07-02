#include<stdio.h>
#include<conio.h>
int main()
{
    char ch,data[100];
    int i,vowel,consonant,digit,word,space,small,capital,other;

    printf("Enter your data= ");
    gets(data);

    i=vowel=consonant=digit=word=space=small=capital=other=0;

    while((ch=data[i])!='\0')
        {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowel++;

        else if((ch>='a'&& ch<='z')|| (ch>='A'&& ch<='Z'))
            consonant++;

        else if(ch==' ')
            space++;

        else if(data[i]>=48 && data[i]<=57)
            digit++;

            else if(data[i]>=65 && data[i]<=90)
                small++;
            else if(data[i]>97 && data[i]<=127)
                capital++;

        else
            other++;

            i++;
    }
    word++;

    printf("vowel=%d\n",vowel);
    printf("Consonant=%d\n",consonant);
    printf("Digit=%d\n",digit);
    printf("Space=%d\n",space);
    printf("Other=%d\n",other);
    printf("Small letter=%d\n",small);
    printf("Capital letter=%d\n",capital);

    getch();
}
