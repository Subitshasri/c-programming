#include<stdio.h>
int main()
{
	// "book" -> string -> set of char ->'b' 'o' 'o' 'k'
	char str[20];// vasanth priyan
	scanf("%[^\n]s",str); // which will take the string upto whitespace
	printf("%s",str);
}