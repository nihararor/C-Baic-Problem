//Write a Program to Check if a number is divisible by 2 or Not.

#include<stdio.h>
main(){
	int n;
	printf("Enter the Number");
	scanf("%d",&n);
	if(n%2==0)
		printf("%d is divisible by 2",n);
	else
		printf("%d is not divisible by 2",n);
	return 0;
}
