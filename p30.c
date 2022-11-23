// C program to check whether a number is divisible by 5 or 11


#include<stdio.h>
int main(){
	int n;
	printf("Enter the Number :");
	scanf("%d",&n);
	if(n%11==0 && n%5==0){
		printf("Divisible by Both");
	}
	else{
		if(n%11==0){
			printf("Divisible by 11");
		}
	else if(n%5==0){
		printf("Divisible by 5");
	}
	else{
		printf("Not Divisible ");
	}
	}
	return 0;
}
