//program for if-else
#include<stdio.h>
main()
{
	char ch;
	printf("Enter a Alphabet : ");
	scanf("%c",&ch);
	if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'|| ch=='u')
    {
    	printf("It is a Vowel");
	}
	else
	{
		printf("It is a Consonant");
	}
}   
