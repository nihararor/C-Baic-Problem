// C Program to Calculate Average Marks of 5 Subjects


#include<stdio.h>
int main(){
	int a,b,c,d,e,Avg;
	printf("Enter the Marks Of 5 Subject");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e);
	Avg=(a+b+c+d+e)/5;
	printf("Average = %d",Avg);
	return 0;
}
