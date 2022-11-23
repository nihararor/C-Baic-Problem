// Write a program to print the smallest number of two.

#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the value of 1 and 2 digit");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("%d is greater the %d",a,b);
	}
	else{
		printf("%d is greater the %d",b,a);
	}
	return 0;
}
