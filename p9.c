// Write a Program to Find If a Character entered by user is Upper case or Lower case

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the Character :");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
		printf("Upper Case");
	else if(ch>='a' && ch<='z')
		printf("Lower case");
	else{
		printf("It is not an english Letter");
	}
	return 0;
}
