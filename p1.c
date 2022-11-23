//Write a program to calculate perimeter of rectangle.
//Take sides, a & b, from the user.
//2(a+b)


#include<stdio.h>
#include<conio.h>
main(){
	int a,b,p;
	printf("Enter the value of Length and Breath");
	scanf("%d %d",&a,&b);
	p=2*(a+b);
	printf("%d",p);
	getch();
}
