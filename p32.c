// C Program to tell This Character is Alphabet, Digit or Special Character by enter there Ascii key
//0-47-->special key
//48-57-->0 to 9
//58-64-->special key
//65-90-->Ato Z
//91-96-->special key
//97-122-->ato z
//123-127-->special key


#include<stdio.h>
int main(){
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	if(n>=0 && n<=47){
		printf("Special Key");
	}
	else if(n>=48 && n<=57){
		printf("0 to 9");
	}
	else if(n>=58 && n<=64){
		printf("Special Key");
	}
	else if(n>=65 && n<=90){
		printf("A To Z");
	}
	else if(n>=91 && n<=96){
		printf("Special Key");
	}
	else if(n>=97 && n<=122){
		printf("a to z");
	}
	else if(n>=123 && n<=127){
		printf("Special Key");
	}
	else{
		printf("Invalid Key");
	}
	return 0;
	
}
