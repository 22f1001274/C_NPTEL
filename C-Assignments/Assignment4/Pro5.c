#include<stdio.h>

   /* TO CHECK WETHER A CHARATER A A VOWEL OR CONSONANT */

int main()
{
	char ch;
	scanf("%c", &ch);

	if ((ch == 'a') || (ch == 'A') || (ch == 'e') || (ch == 'E') || (ch == 'i') || (ch == 'I') || (ch == 'o') || (ch == 'O') || (ch == 'u') || (ch == 'U'))
	printf("%c is vowel\n", ch);
	else 
	printf("%c is consonant\n", ch);
	return 0;
}	
