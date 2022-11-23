//Take a number(n) from user & print output its cube(n*n*n).

#include<stdio.h>
main(){
	int n;
	printf("Enter the value of n");
	scanf("%d",&n);
	n=n*n*n;
	printf("Cube = %d",n);
	return 0;
}
