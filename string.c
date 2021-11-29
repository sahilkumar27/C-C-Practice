#include<stdio.h>
#include<conio.h>

int main(){
    char str[150];
    int vowel=0,space=0,consonants=0,digit=0;

    printf("Enter a str of : ");
    gets(str);

    for (int i=0; i<150; i++){
        if(str[i]==' ')
        space++;

        if((str[i]>=65 && str[i]<=90)|| (str[i]>=97 && str[i]<=122))
		
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
		vowel++;

        else
        consonants++;

        if(str[i]>=48 && str[i]<=57)
        digit++;
    }

    printf("Vowel = %d, Consonants = %d, spaces = %d & digit = %d",vowel,consonants-vowel,space,digit);
    
    return 0;
}
