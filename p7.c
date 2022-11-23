// Write a Program to Check the Student Pass or Fail the Exam
// above 35 pass otherwise fail

#include <stdio.h>
main(){
	int n;
	printf("Enter the Marks :");
	scanf("%d",&n);
	if(n>=35&&n<=100)
		printf("Pass");
	else if (n<=35)
		printf("Fail");
	else
		printf("Invalid Statement");
	return 0;
}
