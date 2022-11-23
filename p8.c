// Write a Program to give grades to a Students
// marks <30 is c
//30<=marks<70 is B
//70<=marks<90 is A
//90<=marks<=100 is A+

#include<stdio.h>
main(){
	int marks;
	printf("Enter the Marks of Student");
	scanf("%d",&marks);
	if(marks<30)
		printf("C\n");
	else if(30<=marks<70)
		printf("B\n");
	else if(70<=marks<90)
		printf("A\n");
	else if(90<=marks<=100)
		printf("A+");
	return 0;
}
