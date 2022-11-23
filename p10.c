//Write a program to print the average of 3 numbers.

#include<stdio.h>
int main(){
	int a,b,c,avg;
	printf("Enter the 3 number");
	scanf("%d %d %d",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("Average of 3 Number = %d",avg);
	return 0;
}
