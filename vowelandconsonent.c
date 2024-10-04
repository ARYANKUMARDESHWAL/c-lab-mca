#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character you want to check weather it is vowel aur alphabet = \n");
    scanf("%c",&ch);
    printf("%c",ch);
    if(ch=='a'||ch=='e'|| ch=='i' ||ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' ||ch=='O' ||ch=='U')
        {
           printf("  IT IS A VOWEL \n");
        }
    else
        {
           printf("  IT IS A CONSONENT");
        } 
    return 0;
}